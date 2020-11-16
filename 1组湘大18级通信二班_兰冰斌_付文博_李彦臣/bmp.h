#ifndef __BMP_H__
#define __BMP_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


void draw_point (  int x, int y, int color );
void show_bmp(char * pathname ,int x,int y);
void brush_lcd(int color);
#endif
