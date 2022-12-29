/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_BOLD_15
#define ROBOTO_BOLD_15 1
#endif

#if ROBOTO_BOLD_15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002C "," */
    0x6d, 0xe0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x8, 0xc6, 0x23, 0x18, 0x8c, 0x62, 0x31, 0x0,

    /* U+0030 "0" */
    0x38, 0x9b, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+0031 "1" */
    0x1b, 0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6,

    /* U+0032 "2" */
    0x3d, 0xcf, 0x18, 0x30, 0xe1, 0x87, 0x1c, 0x70,
    0xc3, 0xf8,

    /* U+0033 "3" */
    0x7d, 0xcf, 0x18, 0x30, 0x67, 0x81, 0x83, 0xc7,
    0x8d, 0xf0,

    /* U+0034 "4" */
    0xc, 0x1c, 0x3c, 0x3c, 0x6c, 0xec, 0xcc, 0xff,
    0xc, 0xc, 0xc,

    /* U+0035 "5" */
    0x7e, 0xc1, 0x6, 0xf, 0xc9, 0xc1, 0x83, 0xc7,
    0xd9, 0xe0,

    /* U+0036 "6" */
    0x18, 0xe1, 0x86, 0xf, 0xd9, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+0037 "7" */
    0xff, 0x7, 0x6, 0x6, 0xc, 0xc, 0x1c, 0x18,
    0x38, 0x30, 0x70,

    /* U+0038 "8" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x67, 0xb1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x38, 0xdb, 0x1e, 0x3c, 0x7c, 0xdf, 0x83, 0xc,
    0x18, 0xc0,

    /* U+003A ":" */
    0xc0, 0x3,

    /* U+003B ";" */
    0xc0, 0x3f, 0x80,

    /* U+003C "<" */
    0x6, 0x3f, 0xe6, 0xf, 0x83, 0xc1, 0x80,

    /* U+003E ">" */
    0x81, 0xe1, 0xf0, 0x77, 0xde, 0x20, 0x0,

    /* U+0041 "A" */
    0xc, 0x7, 0x81, 0xe0, 0x78, 0x3b, 0xc, 0xc3,
    0x31, 0xfe, 0x61, 0x98, 0x7e, 0xc,

    /* U+0042 "B" */
    0xfc, 0xc7, 0xc3, 0xc3, 0xc7, 0xfe, 0xc3, 0xc3,
    0xc3, 0xc7, 0xfe,

    /* U+0043 "C" */
    0x3e, 0x63, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc3, 0x63, 0x3e,

    /* U+0044 "D" */
    0xf8, 0xc6, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc6, 0xc6, 0xf8,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x6, 0x3, 0x1f,
    0x83, 0x41, 0xb0, 0xcf, 0xc0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0xc7,
    0x89, 0xe0,

    /* U+004B "K" */
    0xc7, 0xc6, 0xcc, 0xdc, 0xf8, 0xf8, 0xfc, 0xcc,
    0xce, 0xc7, 0xc3,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+004D "M" */
    0xe0, 0xfc, 0x1f, 0xc7, 0xf8, 0xfd, 0x17, 0xb6,
    0xf6, 0xde, 0x53, 0xce, 0x79, 0xcf, 0x11, 0x80,

    /* U+004E "N" */
    0xc1, 0xf0, 0xfc, 0x7e, 0x3f, 0x9e, 0xef, 0x37,
    0x8f, 0xc7, 0xe1, 0xf0, 0x60,

    /* U+004F "O" */
    0x3e, 0x31, 0x90, 0x58, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x41, 0x31, 0x8f, 0x80,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3e, 0x31, 0x90, 0x58, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x41, 0xb1, 0x8f, 0x80, 0x70, 0x10,

    /* U+0052 "R" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc7, 0xfe, 0xce,
    0xc6, 0xc7, 0xc3,

    /* U+0053 "S" */
    0x3c, 0x47, 0xc3, 0xe0, 0xf8, 0x7e, 0x1f, 0x7,
    0xc3, 0x63, 0x3c,

    /* U+0054 "T" */
    0xff, 0x8c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x0,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0056 "V" */
    0xe1, 0xd8, 0x66, 0x19, 0xce, 0x33, 0xc, 0xc3,
    0x70, 0x78, 0x1e, 0x7, 0x80, 0xc0,

    /* U+0057 "W" */
    0xe3, 0x1b, 0x39, 0xd9, 0xcc, 0xce, 0x66, 0x5b,
    0x36, 0xd8, 0xf7, 0xc7, 0xbc, 0x38, 0xe1, 0xc7,
    0x6, 0x38,

    /* U+0058 "X" */
    0x63, 0xb9, 0x8d, 0xc7, 0xc1, 0xe0, 0xe0, 0x78,
    0x7c, 0x37, 0x39, 0xf8, 0x60,

    /* U+0059 "Y" */
    0x61, 0x9c, 0xe3, 0x30, 0xcc, 0x1e, 0x7, 0x80,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+005A "Z" */
    0xff, 0x7, 0xe, 0xc, 0x1c, 0x18, 0x38, 0x30,
    0x70, 0xe0, 0xff,

    /* U+0061 "a" */
    0x7d, 0x8c, 0x1b, 0xfc, 0x78, 0xf1, 0xbf,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xec, 0xd8, 0xf1, 0xe3, 0xc7,
    0x9b, 0xf0,

    /* U+0063 "c" */
    0x3c, 0xcf, 0x1e, 0xc, 0x18, 0x19, 0x9e,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xf6, 0x78, 0xf1, 0xe3, 0xc6,
    0xcd, 0xf8,

    /* U+0065 "e" */
    0x3c, 0xcf, 0x1f, 0xfc, 0x18, 0x19, 0x1e,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xd9, 0xbf, 0x6,
    0x99, 0xe0,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0xc3, 0xff, 0xfc,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x7d, 0xdf, 0x3c, 0x7c, 0xdd,
    0x9b, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfd, 0xec, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63,

    /* U+006E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0x1c,

    /* U+0070 "p" */
    0xfd, 0x9b, 0x1e, 0x3c, 0x78, 0xf3, 0x7e, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xd9, 0xbf, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xfe, 0x31, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x7b, 0x3c, 0x3e, 0x7c, 0x3c, 0xde,

    /* U+0074 "t" */
    0x63, 0x3e, 0xc6, 0x31, 0x8c, 0x61, 0xc0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+0076 "v" */
    0xc6, 0xcd, 0x9b, 0x63, 0xc7, 0x8e, 0xc,

    /* U+0077 "w" */
    0xc4, 0x6d, 0xd9, 0xbb, 0x35, 0x67, 0xbc, 0x77,
    0xc, 0x61, 0x8c,

    /* U+0078 "x" */
    0x66, 0x6e, 0x3c, 0x38, 0x3c, 0x3c, 0x6e, 0xe6,

    /* U+0079 "y" */
    0xe6, 0x66, 0x66, 0x6c, 0x3c, 0x3c, 0x38, 0x18,
    0x18, 0x10, 0x70,

    /* U+007A "z" */
    0xfe, 0x1c, 0x71, 0xc3, 0x8e, 0x38, 0x7f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 59, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3, .adv_w = 70, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 90, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 12, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 138, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 68, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 63, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 116, .adv_w = 122, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 123, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 130, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 163, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 170, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 70, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 210, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 169, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 166, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 325, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 148, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 148, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 210, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 152, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 148, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 86, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 499, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 62, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 519, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 208, .box_w = 12, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 568, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 578, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 123, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 176, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 120, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 640, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 2, 3,
    4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 0, 17
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 31, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 31, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 19,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 45,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 38,
    4, 4,
    19, 21,
    19, 25,
    19, 33,
    19, 35,
    19, 38,
    19, 39,
    19, 40,
    19, 41,
    19, 43,
    19, 57,
    19, 58,
    19, 59,
    19, 60,
    19, 64,
    19, 65,
    19, 66,
    19, 67,
    19, 69,
    19, 70,
    20, 38,
    20, 40,
    20, 43,
    21, 38,
    22, 2,
    22, 3,
    22, 19,
    22, 38,
    22, 40,
    22, 42,
    22, 43,
    22, 44,
    23, 38,
    23, 47,
    23, 48,
    23, 49,
    23, 50,
    23, 51,
    23, 59,
    23, 61,
    23, 65,
    23, 66,
    23, 67,
    23, 69,
    24, 2,
    24, 3,
    24, 19,
    24, 28,
    24, 38,
    24, 45,
    24, 47,
    24, 48,
    24, 49,
    24, 51,
    24, 59,
    24, 61,
    24, 62,
    24, 65,
    24, 66,
    24, 69,
    26, 19,
    26, 38,
    26, 42,
    26, 43,
    27, 19,
    27, 38,
    27, 42,
    27, 43,
    28, 19,
    29, 21,
    29, 25,
    29, 33,
    29, 35,
    29, 47,
    29, 48,
    29, 49,
    29, 51,
    29, 59,
    29, 61,
    29, 65,
    29, 66,
    29, 67,
    29, 69,
    30, 19,
    30, 21,
    30, 25,
    30, 33,
    30, 35,
    30, 38,
    30, 39,
    30, 40,
    30, 41,
    30, 43,
    30, 65,
    30, 66,
    30, 67,
    30, 69,
    31, 19,
    31, 38,
    31, 42,
    31, 43,
    32, 19,
    32, 38,
    32, 42,
    32, 43,
    33, 2,
    33, 3,
    33, 19,
    33, 38,
    33, 40,
    33, 42,
    33, 43,
    33, 44,
    34, 2,
    34, 3,
    34, 19,
    34, 28,
    34, 42,
    34, 44,
    34, 45,
    34, 47,
    34, 48,
    34, 49,
    34, 51,
    34, 59,
    34, 61,
    34, 64,
    34, 66,
    34, 69,
    35, 38,
    35, 40,
    35, 41,
    35, 43,
    36, 38,
    36, 40,
    36, 43,
    38, 1,
    38, 2,
    38, 3,
    38, 19,
    38, 21,
    38, 25,
    38, 28,
    38, 33,
    38, 35,
    38, 37,
    38, 38,
    38, 40,
    38, 41,
    38, 43,
    38, 45,
    38, 47,
    38, 48,
    38, 49,
    38, 51,
    38, 57,
    38, 58,
    38, 59,
    38, 60,
    38, 61,
    38, 62,
    38, 63,
    38, 65,
    38, 66,
    38, 67,
    38, 68,
    38, 69,
    38, 70,
    39, 19,
    40, 2,
    40, 3,
    40, 19,
    40, 21,
    40, 25,
    40, 33,
    40, 35,
    40, 45,
    40, 47,
    40, 48,
    40, 49,
    40, 51,
    40, 59,
    40, 61,
    40, 62,
    40, 65,
    40, 66,
    40, 69,
    41, 2,
    41, 3,
    41, 19,
    41, 38,
    41, 45,
    41, 47,
    41, 48,
    41, 49,
    41, 51,
    41, 59,
    41, 61,
    41, 62,
    41, 65,
    42, 21,
    42, 25,
    42, 33,
    42, 35,
    42, 40,
    42, 47,
    42, 48,
    42, 49,
    42, 51,
    42, 59,
    42, 61,
    42, 65,
    42, 66,
    42, 69,
    43, 2,
    43, 3,
    43, 19,
    43, 21,
    43, 25,
    43, 28,
    43, 33,
    43, 35,
    43, 37,
    43, 38,
    43, 39,
    43, 40,
    43, 41,
    43, 42,
    43, 43,
    43, 45,
    43, 47,
    43, 48,
    43, 49,
    43, 50,
    43, 51,
    43, 57,
    43, 58,
    43, 59,
    43, 60,
    43, 61,
    43, 62,
    43, 63,
    43, 64,
    43, 65,
    43, 66,
    43, 68,
    43, 69,
    43, 70,
    44, 19,
    44, 21,
    44, 25,
    44, 33,
    44, 35,
    44, 47,
    44, 48,
    44, 49,
    44, 51,
    44, 59,
    44, 61,
    44, 65,
    44, 66,
    44, 67,
    44, 69,
    45, 66,
    45, 69,
    46, 66,
    46, 68,
    46, 69,
    46, 70,
    49, 66,
    49, 69,
    50, 47,
    50, 48,
    50, 49,
    50, 51,
    50, 61,
    55, 47,
    55, 48,
    55, 49,
    55, 51,
    55, 61,
    59, 66,
    59, 68,
    59, 69,
    59, 70,
    60, 66,
    60, 68,
    60, 69,
    60, 70,
    62, 2,
    62, 3,
    62, 45,
    62, 47,
    62, 48,
    62, 49,
    62, 50,
    62, 51,
    62, 59,
    62, 61,
    62, 64,
    62, 66,
    62, 67,
    62, 69,
    64, 59,
    66, 2,
    66, 3,
    66, 45,
    66, 47,
    66, 48,
    66, 49,
    66, 50,
    66, 51,
    66, 59,
    66, 61,
    67, 2,
    67, 3,
    68, 47,
    68, 48,
    68, 49,
    68, 51,
    68, 59,
    68, 61,
    69, 2,
    69, 3,
    69, 45,
    69, 47,
    69, 48,
    69, 49,
    69, 50,
    69, 51,
    69, 59,
    69, 61,
    70, 47,
    70, 48,
    70, 49,
    70, 51,
    70, 59,
    70, 61
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -7, -29, -2, -2, -2, -2, -14, -2,
    -9, -5, -18, -6, -6, -1, -6, -2,
    -1, -6, -4, -6, 1, -3, -3, -6,
    -3, -14, -14, -2, -10, -3, -3, -5,
    -3, 2, -2, -2, -2, -2, -2, -2,
    -2, -2, -3, -3, -3, -32, -32, -22,
    -24, 2, -4, -2, -2, -2, -2, -2,
    -2, -3, -3, -3, -3, 2, -3, 2,
    -3, 2, -3, 2, -3, -3, -4, -4,
    -4, -4, -3, -3, -3, -3, -3, -3,
    -3, -5, -7, -5, 2, -7, -7, -7,
    -7, -24, -3, -24, -11, -33, -2, -14,
    -6, -14, 2, -3, 2, -3, 2, -3,
    2, -3, -14, -14, -2, -10, -3, -3,
    -5, -3, -47, -47, -21, -22, -6, -4,
    -1, -2, -2, -2, -2, -2, -2, 2,
    2, 2, -4, -3, -2, -4, -6, -2,
    -6, -7, -30, -30, -14, -3, -3, -25,
    -3, -3, -2, 2, 2, 2, 2, -20,
    -10, -10, -10, -10, -10, -10, -24, -10,
    -10, -8, -9, -8, -10, -6, -9, -10,
    -7, -3, -25, -25, -9, -2, -2, -2,
    -2, -5, -5, -5, -5, -5, -5, -5,
    -4, -3, -1, -1, -17, -17, -5, 2,
    -4, -4, -4, -4, -4, -4, -4, -2,
    -2, -3, -3, -3, -3, 2, -3, -3,
    -3, -3, -2, -3, -2, -4, -4, -27,
    -27, -18, -3, -3, -11, -3, -3, -2,
    2, -11, 2, 2, 2, 2, -7, -8,
    -8, -8, -3, -8, -5, -5, -8, -5,
    -8, -5, -7, -3, -5, -2, -3, -2,
    -4, 2, -3, -3, -3, -3, -2, -2,
    -2, -2, -2, -2, -2, -3, -3, -3,
    -2, -2, -1, -2, -1, -2, -2, -2,
    -3, -3, -3, -3, -3, -2, -2, -2,
    -2, -2, -2, -2, -2, -2, -1, -2,
    -1, -2, -20, -20, -4, -2, -2, -2,
    2, -2, -4, -2, 6, 2, 2, 2,
    -4, -20, -20, -2, -2, -2, -2, 2,
    -2, -2, -2, -15, -15, -2, -2, -2,
    -2, -5, -2, -20, -20, -2, -2, -2,
    -2, 2, -2, -2, -2, -2, -2, -2,
    -2, -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 339,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t roboto_bold_15 = {
#else
lv_font_t roboto_bold_15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTO_BOLD_15*/

