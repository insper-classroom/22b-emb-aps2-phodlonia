/************************************************************************/
/* includes                                                             */
/************************************************************************/

#include <asf.h>
#include <string.h>
#include "ili9341.h"
#include "lvgl.h"
#include "touch/touch.h"
#include "tela1.h"
#include "tela2.h"

/************************************************************************/
/* LCD / LVGL                                                           */
/************************************************************************/

#define LV_HOR_RES_MAX          (240)
#define LV_VER_RES_MAX          (320)

/*A static or global variable to store the buffers*/
static lv_disp_draw_buf_t disp_buf;

/*Static or global buffer(s). The second buffer is optional*/
static lv_color_t buf_1[LV_HOR_RES_MAX * LV_VER_RES_MAX];
static lv_disp_drv_t disp_drv;          /*A variable to hold the drivers. Must be static or global.*/
static lv_indev_drv_t indev_drv;

// Fonts
// LV_FONT_DECLARE(roboto_bold_15);
// LV_FONT_DECLARE(roboto_bold_24);
// LV_FONT_DECLARE(roboto_bold_32);
// LV_FONT_DECLARE(roboto_bold_72);
// LV_FONT_DECLARE(roboto_regular_20);
// LV_FONT_DECLARE(roboto_regular_32);
// LV_FONT_DECLARE(roboto_regular_15


//screens
static lv_obj_t * scr1;  // screen 1
static lv_obj_t * scr2;  // screen 2

//screen2 objs
lv_obj_t * diameter_label;
lv_obj_t * image_btn_settings;
lv_obj_t * settings_label;
lv_obj_t * logo_label;
lv_obj_t * diameter_value_label;
lv_obj_t * btn_plus;
lv_obj_t * btn_plus_label;
lv_obj_t * btn_minus_label;
lv_obj_t * btn_minus;
lv_obj_t * btn_back;
lv_obj_t * btn_back_label;


//screen 1 objs
lv_obj_t * labelClock;
lv_obj_t * status_btn_label;
lv_obj_t * status_btn;
lv_obj_t * image_logo; //OK
lv_obj_t * label_time; //OK
lv_obj_t * label_current_speed; //OK
lv_obj_t * label_current_speed_unit; //OK
lv_obj_t * stop_btn;
lv_obj_t * stop_label;
lv_obj_t * play_btn;
lv_obj_t * play_label;
lv_obj_t * reset_btn;
lv_obj_t * reset_label;
lv_obj_t * label_current_accelaration;
lv_obj_t * up_btn;
lv_obj_t * up_label;
lv_obj_t * down_btn;
lv_obj_t * down_label;


//Semaphores
SemaphoreHandle_t xSemaphoreRTC;

//Queues
QueueHandle_t xQueueClk;
QueueHandle_t xQueuePulse;

//flags
volatile int diameter_value_flag = 26;
volatile int acceleration = 0;
volatile int flag_screen = 0;
volatile int power = 1;
volatile char flag_rtc_second = 0;
volatile char counter = 0;
volatile char clk_config = 0;
volatile 	uint32_t current_hour, current_min, current_sec;
volatile uint32_t current_year, current_month, current_day, current_week;
void but_callBack1(void);

//calendar
typedef struct  {
	uint32_t year;
	uint32_t month;
	uint32_t day;
	uint32_t week;
	uint32_t hour;
	uint32_t minute;
	uint32_t second;
} calendar;

void RTC_init(Rtc *rtc, uint32_t id_rtc, calendar t, uint32_t irq_type);

volatile float dt = 0;

// definindo frequencia e pi
#define	FREQ 100.0
#define PI 3.142857

//DFINICAO DOS PINOS DOS SENSORES
#define MAG_PIO				PIOB
#define MAG_PIO_ID			ID_PIOB
#define MAG_IDX				3
#define MAG_IDX_MASK		(1 << MAG_IDX)

#define PINO_PIOC			PIOC
#define PINO_ID_PIOC		ID_PIOC
#define PIOC_IDX			31
#define PIO_PC31_MASK		(1 << PIOC_IDX)


/************************************************************************/
/* RTOS                                                                 */
/************************************************************************/

#define TASK_LCD_STACK_SIZE                (1024*6/sizeof(portSTACK_TYPE))
#define TASK_LCD_STACK_PRIORITY            (tskIDLE_PRIORITY)

#define TASK_RTC_STACK_SIZE                (1024*6/sizeof(portSTACK_TYPE))
#define TASK_RTC_STACK_PRIORITY            (tskIDLE_PRIORITY)

#define TASK_MEASURES_STACK_SIZE             	(1024*6/sizeof(portSTACK_TYPE))
#define TASK_MEASURES_STACK_PRIORITY            (tskIDLE_PRIORITY)

#define TASK_CLOCK_STACK_SIZE             		(1024*6/sizeof(portSTACK_TYPE))
#define TASK_CLOCK_STACK_PRIORITY            	(tskIDLE_PRIORITY)

extern void vApplicationStackOverflowHook(xTaskHandle *pxTask,  signed char *pcTaskName);
extern void vApplicationIdleHook(void);
extern void vApplicationTickHook(void);
extern void vApplicationMallocFailedHook(void);
extern void xPortSysTickHandler(void);

extern void vApplicationStackOverflowHook(xTaskHandle *pxTask, signed char *pcTaskName) {
	printf("stack overflow %x %s\r\n", pxTask, (portCHAR *)pcTaskName);
	for (;;) {	}
}

extern void vApplicationIdleHook(void) { }

extern void vApplicationTickHook(void) { }

extern void vApplicationMallocFailedHook(void) {
	configASSERT( ( volatile void * ) NULL );
}

/************************************************************************/
/* lvgl                                                                 */
/************************************************************************/

static void event_handler(lv_event_t * e) {
	lv_event_code_t code = lv_event_get_code(e);

	if(code == LV_EVENT_CLICKED) {
		LV_LOG_USER("Clicked");
	}
	else if(code == LV_EVENT_VALUE_CHANGED) {
		LV_LOG_USER("Toggled");
	}
}

void lv_ex_btn_1(void) {
	lv_obj_t * label;

	lv_obj_t * btn_plus = lv_btn_create(lv_scr_act());
	lv_obj_add_event_cb(btn_plus, event_handler, LV_EVENT_ALL, NULL);
	lv_obj_align(btn_plus, LV_ALIGN_CENTER, 0, -40);

	label = lv_label_create(btn_plus);
	lv_label_set_text(label, "Corsi");
	lv_obj_center(label);

	lv_obj_t * btn_minus = lv_btn_create(lv_scr_act());
	lv_obj_add_event_cb(btn_minus, event_handler, LV_EVENT_ALL, NULL);
	lv_obj_align(btn_minus, LV_ALIGN_CENTER, 0, 40);
	lv_obj_add_flag(btn_minus, LV_OBJ_FLAG_CHECKABLE);
	lv_obj_set_height(btn_minus, LV_SIZE_CONTENT);

	label = lv_label_create(btn_minus);
	lv_label_set_text(label, "Toggle");
	lv_obj_center(label);
}

/************************************************************************/
/* HANDLERS                                                                */
/************************************************************************/
void io_init(void)
{
	pmc_enable_periph_clk(MAG_PIO_ID);
	pio_configure(MAG_PIO, PIO_INPUT, MAG_IDX_MASK, PIO_IT_RISE_EDGE);
	pio_handler_set(MAG_PIO, MAG_PIO_ID, MAG_IDX_MASK, PIO_IT_FALL_EDGE, but_callBack1);
	pio_enable_interrupt(MAG_PIO, MAG_IDX_MASK);
	pio_get_interrupt_status(MAG_PIO);
	NVIC_EnableIRQ(MAG_PIO_ID);
	NVIC_SetPriority(MAG_PIO_ID, 4);
}

static void RTT_init(float freqPrescale, uint32_t IrqNPulses, uint32_t rttIRQSource) {

	uint16_t pllPreScale = (int) (((float) 32768) / freqPrescale);
	
	if (rttIRQSource & RTT_MR_ALMIEN) {
		uint32_t ul_previous_time;
		ul_previous_time = rtt_read_timer_value(RTT);
		while (ul_previous_time == rtt_read_timer_value(RTT));
	}

	/* config NVIC */
	NVIC_DisableIRQ(RTT_IRQn);
	NVIC_ClearPendingIRQ(RTT_IRQn);
	NVIC_SetPriority(RTT_IRQn, 4);
	NVIC_EnableIRQ(RTT_IRQn);
	
}

void RTC_init(Rtc *rtc, uint32_t id_rtc, calendar t, uint32_t irq_type) {
	pmc_enable_periph_clk(ID_RTC);

	/* Default RTC configuration, 24-hour mode */
	rtc_set_hour_mode(rtc, 0);
	rtc_set_date(rtc, t.year, t.month, t.day, t.week);
	rtc_set_time(rtc, t.hour, t.minute, t.second);

	/* Configure RTC interrupts */
	NVIC_DisableIRQ(id_rtc);
	NVIC_ClearPendingIRQ(id_rtc);
	NVIC_SetPriority(id_rtc, 4);
	NVIC_EnableIRQ(id_rtc);

	rtc_enable_interrupt(rtc,  irq_type);
}

void RTC_Handler(void) {
	uint32_t ul_status = rtc_get_status(RTC);
	
	/* Time or date alarm */
	if ((ul_status & RTC_SR_ALARM) == RTC_SR_ALARM) {
		// o código para irq de alame vem aqui
	}
	
	/* second tick */
	if ((ul_status & RTC_SR_SEC) == RTC_SR_SEC) {
		// o código para irq de segundo vem aqui
		BaseType_t xHigherPriorityTaskWoken = pdFALSE;
		xSemaphoreGiveFromISR(xSemaphoreRTC, &xHigherPriorityTaskWoken);
	}
	
	rtc_clear_status(RTC, RTC_SCCR_SECCLR);
	rtc_clear_status(RTC, RTC_SCCR_ALRCLR);
	rtc_clear_status(RTC, RTC_SCCR_ACKCLR);
	rtc_clear_status(RTC, RTC_SCCR_TIMCLR);
	rtc_clear_status(RTC, RTC_SCCR_CALCLR);
	rtc_clear_status(RTC, RTC_SCCR_TDERRCLR);
}


static void power_handler(lv_event_t * e) {
	lv_event_code_t code = lv_event_get_code(e);

	if(code == LV_EVENT_CLICKED) {
		LV_LOG_USER("Clicked");
		if (power == 1){
			power = 0;
		}
	}
	else if(code == LV_EVENT_VALUE_CHANGED) {
		LV_LOG_USER("Toggled");
	}
}

static void bigger_diameter_handler(lv_event_t * e){
	lv_event_code_t code = lv_event_get_code(e);
	char diameter_value_string[100];

	if(code == LV_EVENT_CLICKED) {
		LV_LOG_USER("Clicked");
		printf("Entrou\n");
		diameter_value_flag += 1;
		sprintf(diameter_value_string, "%d", diameter_value_flag);
		lv_label_set_text(diameter_value_label, diameter_value_string);
	}
	
	
}

static void smaller_diameter_handler(lv_event_t * e){
	lv_event_code_t code = lv_event_get_code(e);
	char diameter_value_string[100];

	if(code == LV_EVENT_CLICKED) {
		LV_LOG_USER("Clicked");
		printf("Entrou\n");
		diameter_value_flag -= 1;
		sprintf(diameter_value_string, "%d", diameter_value_flag);
		lv_label_set_text(diameter_value_label, diameter_value_string);
	}
}

static void screen_handler(lv_event_t * e){
	lv_event_code_t code = lv_event_get_code(e);

	if(code == LV_EVENT_CLICKED) {
		LV_LOG_USER("Clicked");
		flag_screen ? (flag_screen=0) : (flag_screen=1);
	}
}

static void nothing_handler(lv_event_t * e){
	lv_event_code_t code = lv_event_get_code(e);

	if(code == LV_EVENT_CLICKED) {

	}
}

/************************************************************************/
/* CALLBACKS                                                               */
/************************************************************************/

void but_callBack1(void){
	// chegou pulso
	
	//int dt = rtt_read_timer_value(RTT)       ;///FREQ;
	BaseType_t	xHigherPriorityTaskWoken = pdFALSE;
	xQueueSendFromISR(xQueuePulse,&dt,0);
	RTT_init(FREQ, 0 , RTT_SR_RTTINC);
}



/************************************************************************/
/* FUNCTIONS UTILS                                                                */
/************************************************************************/

void lv_screen2(void){
	scr2 = lv_obj_create(NULL);
	
	char diameter_value_string[100];
	sprintf(diameter_value_string, "%d", diameter_value_flag);
	

	//lv_ex_btn_1();

	//lv_obj_t * img = lv_img_create(lv_scr_act());
	//lv_img_set_src(img, &tela2);
	//lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);
	
	//creating tela de diametro text
	diameter_label = lv_label_create(scr2);
	lv_label_set_text(diameter_label, "Diametro da roda");
	lv_obj_align(diameter_label, LV_ALIGN_TOP_MID, 0, 25);
	
	//creating tela de diametro value
	diameter_value_label = lv_label_create(scr2);
	lv_label_set_text(diameter_value_label, diameter_value_string);
	lv_obj_align(diameter_value_label, LV_ALIGN_TOP_MID, 0, 70);
	
	//colocar imagem da roda no meio
	
	//criar os botoes
	btn_plus = lv_btn_create(scr2);
	lv_obj_add_event_cb(btn_plus, bigger_diameter_handler , LV_EVENT_ALL, NULL);
	lv_obj_set_height(btn_plus, 45);
	lv_obj_set_width(btn_plus, 80);
	lv_obj_align(btn_plus, LV_ALIGN_BOTTOM_MID ,-45, -100);
	btn_plus_label = lv_label_create(btn_plus);
	lv_label_set_text(btn_plus_label, LV_SYMBOL_PLUS);
	lv_obj_center(btn_plus_label);
	
	btn_minus = lv_btn_create(scr2);
	lv_obj_add_event_cb(btn_minus, smaller_diameter_handler , LV_EVENT_ALL, NULL);
	lv_obj_set_height(btn_minus, 45);
	lv_obj_set_width(btn_minus, 80);
	lv_obj_align(btn_minus, LV_ALIGN_BOTTOM_MID, 45, -100);
	btn_minus_label = lv_label_create(btn_minus);
	lv_label_set_text(btn_minus_label, LV_SYMBOL_MINUS);
	lv_obj_center(btn_minus_label);
	
	//criando botao voltar
	btn_back = lv_btn_create(scr2);
	lv_obj_add_event_cb(btn_back, screen_handler , LV_EVENT_ALL, NULL);
	lv_obj_set_height(btn_back, 45);
	lv_obj_set_width(btn_back, 80);
	lv_obj_align(btn_back, LV_ALIGN_BOTTOM_MID, 0 , -30);
	btn_back_label = lv_label_create(btn_back);
	lv_label_set_text(btn_back_label, LV_SYMBOL_HOME);
	lv_obj_center(btn_back_label);
}

void lv_screen1(void){
	static lv_style_t btn_status_style;
	scr1 = lv_obj_create(NULL);

	// Configs iniciais
	static lv_style_t style;
	lv_style_init(&style);

	// LOGO
	logo_label = lv_label_create(scr1);
	lv_label_set_text(logo_label, "BICITECH");
	lv_obj_align(logo_label,LV_ALIGN_TOP_LEFT, 0, 0);

	//CONFIG BUTTON
	image_btn_settings = lv_btn_create(scr1);
	lv_obj_add_event_cb(image_btn_settings, screen_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_height(image_btn_settings, 45);
	lv_obj_set_width(image_btn_settings, 80);
	lv_obj_align(image_btn_settings, LV_ALIGN_TOP_RIGHT, 0 , 0);
	//Config byn label
	settings_label = lv_label_create(image_btn_settings);
	lv_label_set_text(settings_label, LV_SYMBOL_SETTINGS);
	lv_obj_center(settings_label);

	// Label hora
	label_time = lv_label_create(scr1);
	lv_obj_align(label_time, LV_ALIGN_CENTER, 0, -70);
	lv_obj_set_style_text_font(label_time, LV_FONT_DEFAULT, LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(label_time, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text_fmt(label_time, "%s", "13:18:03");

	// CURRENT SPEED TEXT
	label_current_speed = lv_label_create(scr1);
	lv_obj_align(label_current_speed, LV_ALIGN_CENTER, -30, -30);
	lv_obj_set_style_text_font(label_current_speed, LV_FONT_DEFAULT, LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(label_current_speed, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text_fmt(label_current_speed, "%d", 00);

	// CURRENT SPEED UNITS TEXT
	label_current_speed_unit = lv_label_create(scr1);
	lv_obj_align_to(label_current_speed_unit, label_current_speed, LV_ALIGN_OUT_RIGHT_BOTTOM, 5, 0);
	lv_obj_set_style_text_font(label_current_speed_unit, LV_FONT_DEFAULT, LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(label_current_speed_unit, lv_color_black(), LV_STATE_DEFAULT);
	lv_label_set_text_fmt(label_current_speed_unit, "%s", "km/h");
	
	//style UP speed btn
	static lv_style_t style1;
	lv_style_init(&style1);
	
	//UP SPEED BTN
	up_btn = lv_btn_create(scr1);
	lv_obj_add_event_cb(up_btn, nothing_handler, LV_EVENT_ALL, NULL); //missing reset event handler
	lv_obj_set_height(up_btn, 55);
	lv_obj_set_width(up_btn, 50);
	lv_obj_align(up_btn, LV_ALIGN_CENTER, 0 , 30);
	//Up speed btn label
	up_label = lv_label_create(up_btn);
	if(acceleration>0){
		lv_label_set_text(up_label,LV_SYMBOL_UP);
		lv_style_set_bg_color(&style1, lv_color_hex(0x7cfc00)); 
	}else if (acceleration<0){
		lv_label_set_text(up_label, LV_SYMBOL_DOWN);
		lv_style_set_bg_color(&style1, lv_color_hex(0xff0000));
	}else{
		lv_label_set_text(up_label,LV_SYMBOL_MINUS);
		lv_style_set_bg_color(&style1, lv_color_hex(0x808080)); 
	}
	
	lv_obj_add_style(up_btn, &style1, 0); 
	lv_obj_center(up_label);

	

	reset_btn = lv_btn_create(scr1);
	lv_obj_add_event_cb(reset_btn, nothing_handler, LV_EVENT_ALL, NULL); //missing reset event handler
	lv_obj_set_height(reset_btn, 55);
	lv_obj_set_width(reset_btn, 50);
	lv_obj_align(reset_btn, LV_ALIGN_BOTTOM_LEFT, 0 , -10);
	//Reset btn label
	reset_label = lv_label_create(reset_btn);
	lv_label_set_text(reset_label, LV_SYMBOL_REFRESH);
	lv_obj_center(reset_label);
	
	//PLAY BUTTON
	play_btn = lv_btn_create(scr1);
	lv_obj_add_event_cb(play_btn, nothing_handler, LV_EVENT_ALL, NULL); //missing play event handler
	lv_obj_set_height(play_btn, 55);
	lv_obj_set_width(play_btn, 50);
	lv_obj_align(play_btn, LV_ALIGN_BOTTOM_MID, 0 , -10);
	//Play btn label
	play_label = lv_label_create(play_btn);
	lv_label_set_text(play_label, LV_SYMBOL_PLAY);
	lv_obj_center(play_label);
	
	
	//STOP BUTTON
	stop_btn = lv_btn_create(scr1);
	lv_obj_add_event_cb(stop_btn, nothing_handler, LV_EVENT_ALL, NULL); //missing stop event handler
	lv_obj_set_height(stop_btn, 55);
	lv_obj_set_width(stop_btn, 50);
	lv_obj_align(stop_btn, LV_ALIGN_BOTTOM_RIGHT, 0 , -10);
	//Stop btn label
	stop_label = lv_label_create(stop_btn);
	lv_label_set_text(stop_label, LV_SYMBOL_STOP);
	lv_obj_center(stop_label);
	
}


/************************************************************************/
/* TASKS                                                                */
/************************************************************************/

static void task_measures(void *pvParameters){
	RTT_init(FREQ, 0 , RTT_SR_RTTINC);
	double aro_metros = diameter_value_flag*0.0254;
	double velocidade_antiga = 0;
	
	//style UP speed btn
	static lv_style_t style1;
	lv_style_init(&style1);
	
	int dt;
	for (;;){
		
		if (xQueueReceive(xQueuePulse,&dt,0)){
			
			//printf("\nPEGOU SEMAFORO PULSE\n");
			// chegou pulso
			//printf("\ndt atual: %d\n", dt);
			float freq =  (float) 1/dt;
			//printf("\nfreq: %f \n", freq);
			double w = 2.0*PI*freq;
			//printf("\nw: %f\n", w);
			double raio = aro_metros/2;
			double velocidade_inst = w * raio;
			//printf("\n velocidade_inst: %f\n", velocidade_inst);
			double velocidade_km_h = velocidade_inst*3.6*1000;
			printf("\n[VELOCIDADE]: %02f KM/H\n", velocidade_km_h);
			
			if (velocidade_km_h >= 99){
				velocidade_km_h = 0;
			}

			double aceleracao_inst = (velocidade_km_h - velocidade_antiga) / dt;

			printf("\n[ACELERACAO]: %f M/S^2\n", aceleracao_inst);
			

			if (aceleracao_inst > 0.0005){

				lv_label_set_text(up_label,LV_SYMBOL_UP);
				lv_style_set_bg_color(&style1, lv_color_hex(0x7cfc00));
				
				
				}else if (aceleracao_inst < -0.0005){
				
				lv_label_set_text(up_label,LV_SYMBOL_DOWN);
				lv_style_set_bg_color(&style1, lv_color_hex(0xff0000));
				
				}else{
				
				lv_label_set_text(up_label,LV_SYMBOL_MINUS);
				lv_style_set_bg_color(&style1, lv_color_hex(0x808080)); 
			}
			
			lv_obj_add_style(up_btn, &style1, 0); 
			
			lv_label_set_text_fmt(label_current_speed, "%02d", (int)velocidade_km_h);
			
			velocidade_antiga = velocidade_km_h;

		}
	}
}

static void task_clock(void *pvParameters) {
	calendar rtc_initial = {2018, 3, 19, 12, 15, 45 ,1};
	RTC_init(RTC, ID_RTC, rtc_initial, RTC_IER_SECEN);

	for (;;)  {
		if(xSemaphoreTake(xSemaphoreRTC, 300)){
			printf("received semmaphore rtc");
			uint32_t current_hour, current_min, current_sec;
			rtc_get_time(RTC, &current_hour, &current_min, &current_sec);
			printf("[RELOGIO] %02d:%02d:%02d\n", current_hour, current_min, current_sec);
			
			if(current_sec % 2 == 0){
				lv_label_set_text_fmt(label_time, "%02d:%02d:%02d", current_hour, current_min, current_sec);
				} else {
				lv_label_set_text_fmt(label_time, "%02d %02d %02d", current_hour, current_min, current_sec);
			}
		}
	}
}

static void task_update(void *pvParameters){
	for (;;)  {
		if(flag_screen){
			lv_scr_load(scr1); // exibe tela 1
			vTaskDelay(500);
			}else{
			lv_scr_load(scr2); // exibe tela 2
			vTaskDelay(500);
		}
	}
}


static void task_lcd(void *pvParameters) {
	int px, py;
	
	lv_screen2();
	lv_screen1();
	

	for (;;)  {
		// 		if (power == 1){
		// 			lv_obj_clean(scr1);
		// 			lv_obj_clean(scr2);
		// 		}
		lv_tick_inc(50);
		lv_task_handler();
		vTaskDelay(50);
	}
}

static void task_rtc(void *pvParameters) {
	/** Configura RTC */
	calendar rtc_initial = {2018, 3, 19, 12, 15, 45 ,1};
	RTC_init(RTC, ID_RTC, rtc_initial, RTC_SR_SEC);
	int32_t delayticks = 0;
	int tick = 1;


	for (;;)  {
		if (xQueueReceive(xQueueClk, &delayticks, (TickType_t) 0)){
			rtc_get_time(RTC, &current_hour,&current_min, &current_sec);
			if (tick == 1){
				lv_label_set_text_fmt(labelClock, "%02d:%02d", current_hour, current_min);
				tick = 0;
				} else {
				lv_label_set_text_fmt(labelClock, "%02d %02d", current_hour, current_min);
				tick = 1;
			}
		}
	}
}

/************************************************************************/
/* configs                                                              */
/************************************************************************/

static void configure_lcd(void) {
	/**LCD pin configure on SPI*/
	pio_configure_pin(LCD_SPI_MISO_PIO, LCD_SPI_MISO_FLAGS);  //
	pio_configure_pin(LCD_SPI_MOSI_PIO, LCD_SPI_MOSI_FLAGS);
	pio_configure_pin(LCD_SPI_SPCK_PIO, LCD_SPI_SPCK_FLAGS);
	pio_configure_pin(LCD_SPI_NPCS_PIO, LCD_SPI_NPCS_FLAGS);
	pio_configure_pin(LCD_SPI_RESET_PIO, LCD_SPI_RESET_FLAGS);
	pio_configure_pin(LCD_SPI_CDS_PIO, LCD_SPI_CDS_FLAGS);
	
	ili9341_init();
	ili9341_backlight_on();
}

static void configure_console(void) {
	const usart_serial_options_t uart_serial_options = {
		.baudrate = USART_SERIAL_EXAMPLE_BAUDRATE,
		.charlength = USART_SERIAL_CHAR_LENGTH,
		.paritytype = USART_SERIAL_PARITY,
		.stopbits = USART_SERIAL_STOP_BIT,
	};

	/* Configure console UART. */
	stdio_serial_init(CONSOLE_UART, &uart_serial_options);

	/* Specify that stdout should not be buffered. */
	setbuf(stdout, NULL);
}

/************************************************************************/
/* port lvgl                                                            */
/************************************************************************/

void my_flush_cb(lv_disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p) {
	ili9341_set_top_left_limit(area->x1, area->y1);   ili9341_set_bottom_right_limit(area->x2, area->y2);
	ili9341_copy_pixels_to_screen(color_p,  (area->x2 + 1 - area->x1) * (area->y2 + 1 - area->y1));
	
	/* IMPORTANT!!!
	* Inform the graphics library that you are ready with the flushing*/
	lv_disp_flush_ready(disp_drv);
}

void my_input_read(lv_indev_drv_t * drv, lv_indev_data_t*data) {
	int px, py, pressed;
	
	if (readPoint(&px, &py))
	data->state = LV_INDEV_STATE_PRESSED;
	else
	data->state = LV_INDEV_STATE_RELEASED;
	
	data->point.x = py;
	data->point.y = 320-px;
}

void configure_lvgl(void) {
	lv_init();
	lv_disp_draw_buf_init(&disp_buf, buf_1, NULL, LV_HOR_RES_MAX * LV_VER_RES_MAX);
	
	lv_disp_drv_init(&disp_drv);            /*Basic initialization*/
	disp_drv.draw_buf = &disp_buf;          /*Set an initialized buffer*/
	disp_drv.flush_cb = my_flush_cb;        /*Set a flush callback to draw to the display*/
	disp_drv.hor_res = LV_HOR_RES_MAX;      /*Set the horizontal resolution in pixels*/
	disp_drv.ver_res = LV_VER_RES_MAX;      /*Set the vertical resolution in pixels*/

	lv_disp_t * disp;
	disp = lv_disp_drv_register(&disp_drv); /*Register the driver and save the created display objects*/
	
	/* Init input on LVGL */
	lv_indev_drv_init(&indev_drv);
	indev_drv.type = LV_INDEV_TYPE_POINTER;
	indev_drv.read_cb = my_input_read;
	lv_indev_t * my_indev = lv_indev_drv_register(&indev_drv);
}

/************************************************************************/
/* main                                                                 */
/************************************************************************/
int main(void) {
	/* board and sys init */
	board_init();
	sysclk_init();
	configure_console();
	
	io_init();

	/* LCd, touch and lvgl init*/
	configure_lcd();
	ili9341_set_orientation(ILI9341_FLIP_Y | ILI9341_SWITCH_XY);
	configure_touch();
	configure_lvgl();
	
	xQueueClk = xQueueCreate(32, sizeof(uint32_t));
	if (xQueueClk == NULL)
	printf("Criação da Queue falhou");
	
	xSemaphoreRTC = xSemaphoreCreateBinary();

	xQueuePulse = xQueueCreate(100, sizeof(int));

	if (xTaskCreate(task_measures, "oled", TASK_MEASURES_STACK_SIZE, NULL, TASK_MEASURES_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create measures task\r\n");
	}
	
	if (xTaskCreate(task_lcd, "LCD", TASK_LCD_STACK_SIZE, NULL, TASK_LCD_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create lcd task\r\n");
	}
	
	if (xTaskCreate(task_clock, "clock", TASK_CLOCK_STACK_SIZE, NULL, TASK_CLOCK_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create clock task\r\n");
	}
	
	if (xTaskCreate(task_update, "Update", TASK_LCD_STACK_SIZE, NULL, TASK_LCD_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create update task\r\n");
	}
	
	if (xTaskCreate(task_rtc, "RTC", TASK_RTC_STACK_SIZE, NULL, TASK_RTC_STACK_PRIORITY, NULL) != pdPASS) {
		printf("Failed to create rtc task\r\n");
	}
	
	/* Start the scheduler. */
	vTaskStartScheduler();

	while(1){ }
}
