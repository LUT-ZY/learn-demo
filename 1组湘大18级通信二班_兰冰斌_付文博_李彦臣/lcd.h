#ifndef __LCD_H__
#define __LCD_H__


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <linux/input.h>
#include <stdlib.h>
#define MOVE_UP 1 
#define MOVE_DOWN 2
#define MOVE_LEFT 3
#define MOVE_RIGHT 4
#define all_off 5



extern int *p ;
int get_finger_slide_direction ();
int  divide_screen();
void init() ;
void end();





#endif
