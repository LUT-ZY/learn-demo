#ifndef __LED_H__
#define __LED_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <stdio.h>


void cmd_led(int x,int y);

#endif
