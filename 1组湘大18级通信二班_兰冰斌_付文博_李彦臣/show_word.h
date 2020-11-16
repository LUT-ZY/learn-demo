#ifndef   SHOW_WORD_H
#define  SHOW_WORD_H


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>

extern int *p ;
void show_word(char *word, int x, int y, int wordsieze, int width, int color);
void show_num(int num1, int x0, int y0, int numsize, int color);
void front_cover();

#endif
