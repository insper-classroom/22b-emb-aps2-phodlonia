/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/
#define LV_LVGL_H_INCLUDE_SIMPLE
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_REGULAR_20
#define ROBOTO_REGULAR_20 1
#endif

#if ROBOTO_REGULAR_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+002C "," */
    0x6d, 0xac,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x2, 0x2, 0x6, 0x4, 0xc, 0xc, 0x8, 0x18,
    0x18, 0x10, 0x30, 0x20, 0x60, 0x60, 0x40, 0xc0,

    /* U+0030 "0" */
    0x3e, 0x31, 0x90, 0x58, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x34, 0x13, 0x18,
    0xf8,

    /* U+0031 "1" */
    0xc, 0xff, 0xe3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc0,

    /* U+0032 "2" */
    0x3e, 0x31, 0xb0, 0x78, 0x30, 0x18, 0xc, 0xc,
    0xe, 0x6, 0x6, 0x7, 0x7, 0x7, 0x3, 0x3,
    0xfe,

    /* U+0033 "3" */
    0x3e, 0x31, 0xb0, 0x78, 0x30, 0x18, 0xc, 0xc,
    0x3c, 0x3, 0x0, 0xc0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+0034 "4" */
    0x3, 0x1, 0xc0, 0xf0, 0x3c, 0x1b, 0x4, 0xc3,
    0x30, 0x8c, 0x63, 0x30, 0xcf, 0xfc, 0xc, 0x3,
    0x0, 0xc0, 0x30,

    /* U+0035 "5" */
    0x7f, 0xb0, 0x18, 0x8, 0x4, 0x2, 0x3, 0xf9,
    0x86, 0x1, 0x80, 0xc0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+0036 "6" */
    0xe, 0x1c, 0x18, 0xc, 0xc, 0x6, 0x3, 0x79,
    0xc6, 0xc1, 0xe0, 0xf0, 0x78, 0x36, 0x1b, 0x18,
    0x78,

    /* U+0037 "7" */
    0xff, 0xc0, 0x30, 0x18, 0x6, 0x3, 0x0, 0xc0,
    0x30, 0x18, 0x6, 0x3, 0x0, 0xc0, 0x60, 0x18,
    0x6, 0x3, 0x0,

    /* U+0038 "8" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xd, 0x8c,
    0x7c, 0x63, 0x60, 0xf0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+0039 "9" */
    0x3c, 0x31, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x9e, 0xc0, 0x60, 0x20, 0x30, 0x30,
    0xe0,

    /* U+003A ":" */
    0xc0, 0x0, 0xc,

    /* U+003B ";" */
    0x60, 0x0, 0x3, 0x6d, 0xe0,

    /* U+003C "<" */
    0x1, 0x7, 0x1e, 0x70, 0xc0, 0xf0, 0x1e, 0x7,
    0x1,

    /* U+003E ">" */
    0x80, 0x70, 0x1f, 0x1, 0xe0, 0x38, 0x78, 0xf1,
    0xc0, 0x80, 0x0,

    /* U+0041 "A" */
    0x3, 0x0, 0x38, 0x1, 0xc0, 0x1b, 0x0, 0xd8,
    0x6, 0xc0, 0x63, 0x3, 0x18, 0x18, 0xc1, 0x83,
    0xf, 0xf8, 0x40, 0x66, 0x3, 0x30, 0x1b, 0x0,
    0x60,

    /* U+0042 "B" */
    0xfe, 0x30, 0xcc, 0x1b, 0x6, 0xc1, 0xb0, 0x6c,
    0x33, 0xf8, 0xc1, 0xb0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x6f, 0xf0,

    /* U+0043 "C" */
    0x1f, 0x6, 0x19, 0x81, 0x30, 0x3c, 0x7, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x1, 0xa0,
    0x36, 0x4, 0x61, 0x87, 0xc0,

    /* U+0044 "D" */
    0xfc, 0x30, 0xcc, 0x1b, 0x6, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x6, 0xc1,
    0xb0, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0xfe, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0xfe,

    /* U+0046 "F" */
    0xff, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0xfe, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x0,

    /* U+0047 "G" */
    0x1f, 0x6, 0x39, 0x83, 0x20, 0x3c, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc3, 0xf8, 0xf, 0x1, 0xb0,
    0x36, 0x6, 0x61, 0xc7, 0xe0,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x18,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0x80, 0xc0, 0x78, 0x3c, 0x1b, 0x18,
    0xf8,

    /* U+004B "K" */
    0xc0, 0xd8, 0x33, 0xc, 0x63, 0x8c, 0xe1, 0x98,
    0x36, 0x7, 0xe0, 0xec, 0x18, 0xc3, 0x1c, 0x61,
    0xcc, 0x19, 0x81, 0xb0, 0x38,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0xfe,

    /* U+004D "M" */
    0xe0, 0x1f, 0x80, 0x7e, 0x3, 0xfc, 0xf, 0xd0,
    0x2f, 0x61, 0xbd, 0x86, 0xf2, 0x13, 0xcc, 0xcf,
    0x33, 0x3c, 0x48, 0xf1, 0xe3, 0xc7, 0x8f, 0xc,
    0x3c, 0x30, 0xc0,

    /* U+004E "N" */
    0xc0, 0x7c, 0xf, 0xc1, 0xf8, 0x3d, 0x87, 0xb0,
    0xf3, 0x1e, 0x73, 0xc6, 0x78, 0x6f, 0xd, 0xe0,
    0xfc, 0x1f, 0x81, 0xf0, 0x18,

    /* U+004F "O" */
    0x1f, 0x6, 0x31, 0x83, 0x20, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xb0,
    0x26, 0xc, 0x63, 0x7, 0xc0,

    /* U+0050 "P" */
    0xff, 0x30, 0x6c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x6, 0xff, 0x30, 0xc, 0x3, 0x0, 0xc0,
    0x30, 0xc, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x6, 0x31, 0x83, 0x20, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xb0,
    0x26, 0xc, 0x63, 0x7, 0xe0, 0x6, 0x0, 0x60,

    /* U+0052 "R" */
    0xff, 0x18, 0x33, 0x3, 0x60, 0x6c, 0xd, 0x81,
    0xb0, 0x36, 0xc, 0xff, 0x18, 0x63, 0xc, 0x60,
    0xcc, 0x19, 0x81, 0xb0, 0x30,

    /* U+0053 "S" */
    0x3e, 0x18, 0x6c, 0xf, 0x3, 0xc0, 0x38, 0x7,
    0xc0, 0xfc, 0xf, 0x80, 0x70, 0xf, 0x3, 0xc0,
    0xd8, 0x61, 0xf0,

    /* U+0054 "T" */
    0xff, 0xe1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x0,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0x98, 0x61, 0xe0,

    /* U+0056 "V" */
    0xc0, 0x36, 0x3, 0x60, 0x32, 0x6, 0x30, 0x63,
    0x6, 0x18, 0xc1, 0x8c, 0x18, 0xc0, 0xd8, 0xd,
    0x80, 0xd0, 0x7, 0x0, 0x70, 0x6, 0x0,

    /* U+0057 "W" */
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83, 0xc3, 0xc3,
    0x43, 0xc6, 0x62, 0x46, 0x66, 0x46, 0x66, 0x66,
    0x26, 0x64, 0x34, 0x2c, 0x3c, 0x3c, 0x3c, 0x3c,
    0x38, 0x38, 0x18, 0x18, 0x18, 0x18,

    /* U+0058 "X" */
    0xc0, 0xec, 0x19, 0x86, 0x18, 0xc3, 0xb0, 0x3e,
    0x3, 0x80, 0x60, 0xe, 0x3, 0xe0, 0xcc, 0x18,
    0xc6, 0x19, 0xc1, 0xb0, 0x38,

    /* U+0059 "Y" */
    0xe0, 0x76, 0x6, 0x70, 0xe3, 0xc, 0x39, 0xc1,
    0x98, 0x1f, 0x80, 0xf0, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,

    /* U+005A "Z" */
    0xff, 0xc0, 0x70, 0x18, 0xc, 0x3, 0x1, 0x80,
    0xe0, 0x30, 0x18, 0x6, 0x3, 0x0, 0xc0, 0x60,
    0x38, 0xf, 0xfc,

    /* U+0061 "a" */
    0x3c, 0xe6, 0xc3, 0x3, 0x3f, 0x63, 0xc3, 0xc3,
    0xc3, 0xe7, 0x7f,

    /* U+0062 "b" */
    0xc0, 0x60, 0x30, 0x18, 0xd, 0xe7, 0x1b, 0xd,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x37, 0x1b,
    0x78,

    /* U+0063 "c" */
    0x1e, 0x31, 0x98, 0x78, 0x3c, 0x6, 0x3, 0x1,
    0x80, 0x61, 0xb1, 0x8f, 0x80,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x60, 0x33, 0xdb, 0x1d, 0x87,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x36, 0x1b, 0x1c,
    0xfe,

    /* U+0065 "e" */
    0x1e, 0x31, 0x98, 0x78, 0x3c, 0x1f, 0xff, 0x1,
    0x80, 0x60, 0x30, 0xc7, 0x80,

    /* U+0066 "f" */
    0x1e, 0x60, 0xc1, 0x8f, 0xc6, 0xc, 0x18, 0x30,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x0,

    /* U+0067 "g" */
    0x3f, 0xb1, 0xd8, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x61, 0xb1, 0xcf, 0xe0, 0x34, 0x1b, 0x18,
    0xf8,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xde, 0xe7, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0xc0, 0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0x30, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0xe0,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x36, 0x33, 0x31,
    0xb0, 0xf0, 0x7c, 0x3b, 0x19, 0x8c, 0x66, 0x1b,
    0xe,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xde, 0x7b, 0x9e, 0x7c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xf,
    0xc, 0x3c, 0x30, 0xc0,

    /* U+006E "n" */
    0xde, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+006F "o" */
    0x1e, 0x1c, 0xe6, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x61, 0x98, 0xe1, 0xe0,

    /* U+0070 "p" */
    0xfe, 0x71, 0xb0, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0x71, 0xbf, 0x98, 0xc, 0x6, 0x3,
    0x0,

    /* U+0071 "q" */
    0x3f, 0xb1, 0xd8, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x61, 0xb1, 0xcf, 0xe0, 0x30, 0x18, 0xc,
    0x6,

    /* U+0072 "r" */
    0xff, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x30,

    /* U+0073 "s" */
    0x3c, 0x47, 0xc3, 0xc0, 0xf8, 0x7e, 0xf, 0x3,
    0xc3, 0x62, 0x3c,

    /* U+0074 "t" */
    0x30, 0xc3, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0x70,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xe7, 0x7f,

    /* U+0076 "v" */
    0xc1, 0xb0, 0xd8, 0x44, 0x63, 0x31, 0x90, 0x58,
    0x3c, 0x1c, 0x6, 0x3, 0x0,

    /* U+0077 "w" */
    0x41, 0x4, 0xc7, 0x19, 0x8e, 0x33, 0x14, 0x62,
    0x6c, 0x86, 0xdb, 0xd, 0x16, 0xa, 0x28, 0x1c,
    0x70, 0x30, 0x60, 0x60, 0xc0,

    /* U+0078 "x" */
    0x61, 0xb1, 0x8c, 0xc3, 0xc1, 0xe0, 0x60, 0x78,
    0x3c, 0x33, 0x31, 0xd8, 0x60,

    /* U+0079 "y" */
    0x61, 0xb0, 0xd8, 0x66, 0x63, 0x31, 0x98, 0x58,
    0x3c, 0x1c, 0x6, 0x3, 0x1, 0x0, 0x80, 0xc1,
    0xc0,

    /* U+007A "z" */
    0xff, 0x7, 0x6, 0xc, 0xc, 0x18, 0x30, 0x30,
    0x60, 0xe0, 0xff
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 79, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 63, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3, .adv_w = 84, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 132, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 20, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 37, .adv_w = 180, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 49, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 180, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 180, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 78, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 68, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 197, .adv_w = 163, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 206, .adv_w = 167, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 217, .adv_w = 209, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 199, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 208, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 210, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 177, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 218, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 228, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 87, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 177, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 201, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 172, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 279, .box_w = 14, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 228, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 220, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 202, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 220, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 548, .adv_w = 197, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 190, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 191, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 208, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 204, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 284, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 201, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 192, .box_w = 12, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 192, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 174, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 168, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 170, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 111, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 846, .adv_w = 176, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 78, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 76, .box_w = 4, .box_h = 19, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 875, .adv_w = 162, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 78, .box_w = 2, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 280, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 177, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 183, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 180, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 958, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 975, .adv_w = 108, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 165, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 105, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1004, .adv_w = 176, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 240, .box_w = 15, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1049, .adv_w = 159, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1079, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
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
    19, 59,
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
    29, 57,
    29, 58,
    29, 59,
    29, 60,
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
    -6, -35, -2, -2, -2, -2, -20, -3,
    -14, -11, -15, -2, -3, -2, -8, -5,
    -8, 2, -4, -4, -9, -5, -16, -16,
    -3, -4, -3, -3, -7, -4, 3, -3,
    -3, -3, -3, -3, -3, -3, -3, -4,
    -3, -4, -37, -37, -27, -41, 3, -5,
    -3, -3, -3, -3, -3, -3, -4, -3,
    -4, -4, 3, -5, 3, -4, 3, -5,
    3, -4, -3, -5, -5, -5, -5, -4,
    -4, -4, -4, -4, -4, -4, -4, -4,
    -4, -6, -10, -6, 3, -10, -10, -10,
    -10, -43, -8, -27, -22, -37, -7, -21,
    -14, -21, 3, -5, 3, -4, 3, -5,
    3, -4, -16, -16, -3, -4, -3, -3,
    -7, -4, -51, -51, -22, -31, -5, -4,
    -2, -2, -2, -2, -2, -2, -2, 2,
    2, 2, -7, -4, -3, -5, -12, -3,
    -7, -6, -34, -34, -12, -4, -4, -37,
    -4, -4, -2, 3, 3, 2, 3, -18,
    -15, -15, -15, -15, -17, -17, -15, -17,
    -15, -12, -18, -15, -11, -9, -12, -11,
    -9, -3, -35, -35, -12, -2, -2, -2,
    -2, -7, -7, -7, -7, -7, -7, -7,
    -5, -4, -2, -2, -19, -19, -7, 2,
    -5, -5, -5, -5, -5, -5, -5, -3,
    -3, -4, -4, -4, -4, 2, -4, -4,
    -4, -4, -3, -4, -3, -5, -5, -33,
    -33, -15, -5, -5, -15, -5, -5, -2,
    3, -15, 3, 3, 2, 3, -11, -10,
    -10, -10, -3, -10, -6, -6, -10, -6,
    -10, -6, -9, -3, -6, -3, -4, -3,
    -5, 2, -4, -4, -4, -4, -3, -3,
    -3, -3, -3, -3, -3, -4, -4, -4,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -4, -4, -4, -4, -4, -3, -3, -3,
    -3, -3, -2, -3, -2, -2, -2, -2,
    -2, -2, -19, -19, -6, -3, -3, -3,
    2, -3, -3, -3, 8, 3, 3, 3,
    -3, -17, -17, -2, -2, -2, -2, 2,
    -2, -2, -2, -19, -19, -3, -3, -3,
    -3, -3, -3, -17, -17, -2, -2, -2,
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
const lv_font_t roboto_regular_20 = {
#else
lv_font_t roboto_regular_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTO_REGULAR_20*/

