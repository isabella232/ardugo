#ifndef ASSETS_H
#define ASSETS_H

// board_background.png
// 64x64
PROGMEM const unsigned char board_background[] = {
// width, height
64, 64,
0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 
0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 
0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 
0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 
0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 
0x7E, 0x7E, 0x7E, 0x00, 0x00, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 
0xBF, 0x00, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0x1F, 0x00, 0x1F, 
0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0x00, 0xBF, 0xBF, 0xBF, 0xBF, 
0xBF, 0xBF, 0x00, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0x00, 
0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0x00, 0xBF, 0xBF, 0xBF, 
0xBF, 0xBF, 0x1F, 0x00, 0x1F, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 
0x00, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0x00, 0x00, 0xDF, 
0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0x00, 0xDF, 0xDF, 0xDF, 0xDF, 
0xDF, 0xDF, 0x00, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0x00, 
0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0x00, 0xDF, 0xDF, 0xDF, 
0xDF, 0xDF, 0xDF, 0x00, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 
0x00, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 0x00, 0xDF, 0xDF, 
0xDF, 0xDF, 0xDF, 0xDF, 0x00, 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 
0xDF, 0x00, 0x00, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0x00, 
0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0x00, 0xEF, 0xEF, 0xEF, 
0xEF, 0xEF, 0xEF, 0x00, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 
0x00, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0x00, 0xEF, 0xEF, 
0xEF, 0xEF, 0xEF, 0xEF, 0x00, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 
0xEF, 0x00, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0x00, 0xEF, 
0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0x00, 0x00, 0xF7, 0xF7, 0xF7, 
0xF7, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 
0x00, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 
0xF7, 0xF7, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 
0xF7, 0x00, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0x00, 0xF7, 
0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0xF7, 0xF7, 
0xF7, 0xF7, 0x00, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0x00, 
0x00, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0x00, 0xFB, 0xFB, 
0xFB, 0xFB, 0xFB, 0xFB, 0x00, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 
0xFB, 0x00, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0x00, 0xFB, 
0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0x00, 0xFB, 0xFB, 0xFB, 0xFB, 
0xFB, 0xFB, 0x00, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0x00, 
0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0x00, 0xFB, 0xFB, 0xFB, 
0xFB, 0xFB, 0xFB, 0x00, 0x00, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 
0xFD, 0x00, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xF8, 0x00, 0xF8, 
0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0xFD, 0xFD, 0xFD, 0xFD, 
0xFD, 0xFD, 0x00, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 
0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0xFD, 0xFD, 0xFD, 
0xFD, 0xFD, 0xF8, 0x00, 0xF8, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 
0x00, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0x00, 0x00, 0x7E, 
0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 
0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 
0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 
0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 
0x7E, 0x7E, 0x7E, 0x7E, 0x00, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
0x7E, 0x00
};


#endif
