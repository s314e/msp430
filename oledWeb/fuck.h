
//  Author: declis (xdec.de)

#ifndef FUCK_H_
#define FUCK_H_

const char str_scene02_hoo[]={"*HOORAY*"};

const char str_scene00_0[]={"XDEC"};
const char str_scene00_1[]={"presents "};
const char str_scene00_3[]={"*****"};

const char str_scene01_2[]={"Hello world! A new small demo for an OLED-Display (SSD1306), HF & GL, no xD-kiddies pls "};

const char str_scene05_4[]={"** D E C L I S **"};
const char str_scene05_5[]={" \\o/ \\o/ code by \\o/ \\o/ "};
const char str_scene05_6[]={"** WWW.XDEC.DE **"};

const char str_scene06_7[]={"You've just watched a ** x d e c ** production, hope you enjoyed it! The code is not optimal at some points, anyway... pwn t3h code huehuUEhuE! declis 24.03.2014 "};
const char str_scene06_8[]={"code: declis"};
const char str_scene06_9[]={"www.xdec.de"};
const char str_scene06_10[]={"MSP430G2553"};
const char str_scene06_11[]={"SSD1306 128x64"};
const char str_scene06_12[]={"THE END"};

const char smiley1b_w=32;
const char smiley1b_h=34;
const char smiley1b[]= {
0x00,0x00,0x00,0x80,0x40,0x20,0x10,0x18,0x08,0x0C,0x04,0x04,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x04,0x04,0x0C,0x08,0x18,0x10,0x20,0x40,0x80,0x00,0x00,0x00,
0xE0,0x1C,0x73,0xCD,0x82,0x81,0x81,0x8F,0x8F,0x8E,0xFC,0x00,0x00,0x00,0x00,0x00,0xF8,0x8C,0x82,0x81,0x81,0x81,0x8F,0x8F,0x8E,0xFC,0x00,0x00,0x01,0x07,0x1C,0xE0,
0x1F,0xE0,0x80,0x08,0x0C,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xF8,0x00,0x00,0x00,0x80,0xE0,0x1F,
0x00,0x00,0x03,0x06,0x08,0x10,0x21,0x67,0x4F,0xDF,0x9F,0xBF,0x2F,0x63,0x43,0x41,0x61,0x61,0x21,0x21,0x91,0x93,0xCF,0x47,0x63,0x20,0x10,0x08,0x06,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned int cityb_w=195;
const unsigned char cityb_h=48;
const char cityb[]= {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xC0,0xE0,0xF0,0xF8,0xFC,0xFC,0xFC,0xFC,0xF8,0xF0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xE0,0xF0,0xE0,0xE0,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xE0,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFC,0xFC,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFC,0xFC,0xFC,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xE0,0xE0,0xE0,0xF0,0xF0,0xF0,0xF0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xF0,0xF8,0xF8,0xF8,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xF0,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xF0,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0xF0,0xF8,0xF8,0xF8,0xFC,0xFC,0xFC,0xFC,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0x80,0x80,0x80,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0x00,0xFF,0xFF,0xFE,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0xF8,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xF8,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00
};

const unsigned char baabis_w=41;
const unsigned char baabis_h=64;
const char baabis[]= {
0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x60,0x30,0x18,0x0C,0x0C,0x06,0x82,0xC3,0x71,0x11,0x11,0x91,0xFF,0xC3,0x06,0x04,0x0C,0x08,0x18,0x30,0x60,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3F,0x61,0xC0,0xC0,0xF0,0x78,0xFC,0x5E,0xF7,0x5D,0x75,0xA1,0x80,0xA3,0x75,0xD6,0x7B,0xD7,0x7C,0x78,0xF0,0xC0,0x00,0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0x1F,0x78,0xC0,0x80,0x00,0x00,0x00,0x71,0xFB,0xAB,0xDB,0x78,0x30,0x00,0x80,0x80,0xC1,0xFF,0xFF,0xF0,0x00,0xC0,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x80,0xFC,0x0F,0xC0,0x80,0x60,0x7F,0xBF,0xC3,0xFE,0xFE,0x0C,0x0C,0x0C,0x0C,0x0E,0x03,0xFB,0xFF,0xFF,0x00,0xFF,0x80,0x60,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xE0,0x10,0x10,0x30,0x3F,0x37,0x38,0x3F,0x37,0x37,0x3B,0x3D,0x16,0x1B,0x18,0x18,0x30,0x00,0x00,0x70,0x3F,0x1F,0x08,0x0B,0x1F,0x16,0x19,0x1E,0x19,0x19,0x9F,0x18,0x18,0x08,0x08,0x08,0x18,0xF0,0x80,0x00,
0x00,0x7F,0xC0,0xC0,0x60,0xB0,0x98,0x9F,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x06,0x0C,0x58,0xCE,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x07,0x0E,0x88,0x98,0x90,0x30,0x60,0xFC,0x8F,0x00,
0x7C,0xC7,0x01,0x3E,0x61,0x4E,0x6A,0x38,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x30,0x6A,0x4A,0x6F,0x3E,0x00,0xFF,0x00,
0x00,0x01,0x07,0x0C,0x18,0x10,0x30,0x20,0x60,0x60,0x40,0x40,0x40,0x60,0x60,0x30,0x30,0x18,0x0C,0x07,0x07,0x0E,0x18,0x30,0x30,0x20,0x60,0x60,0x40,0x40,0x40,0x40,0x60,0x60,0x20,0x30,0x18,0x1C,0x0F,0x01,0x00
};

#endif /*FUCK_H_*/
