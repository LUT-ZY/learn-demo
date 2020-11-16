#include "lcd.h"
int fd = 0;
void init() 
{
	fd = open("/dev/fb0",O_RDWR);
	if(fd==-1)
	{
		perror("open error\n");
		return ;
	}
	
	p = mmap (NULL,800*480*4 ,PROT_READ | PROT_WRITE ,MAP_SHARED , fd , 0);
	if(p == MAP_FAILED)
	{
		perror("mmap error\n");
		return ;
	}
}


int  divide_screen()
{	int fd = open ("/dev/input/event0",O_RDWR);
	if(fd == -1 )
	{
		perror("open error\n");
		return -1;
	}
	struct input_event ev;
	int x,y;
	while(1)
	{
		int r =read(fd,&ev,sizeof(ev));
		if(r != sizeof(ev))
		{
			perror("read ev error\n");
			return -2;
		}
		if(ev.type == EV_ABS && ev.code ==ABS_X)
		{
			x = ev.value ;
		}
		if(ev.type == EV_ABS && ev.code ==ABS_Y)
		{
			y = ev.value ;
		}
	
		break;
	}
		if(400<x<=800)
		{
		printf("���ڿ��Ƶ�\n");
		return 	6;
		}
		else if(0<=x<400)
		{
		printf("���ڿ������\n");
		return 7;
		}
}



int get_finger_slide_direction()
{
	int fd = open ("/dev/input/event0",O_RDWR);
	if(fd == -1 )
	{
		perror("open error\n");
		return -1;
	}
	struct input_event ev;
	int x,y;
	int x_start,y_start,x_stop,y_stop;
	while(1)
	{
		int r =read(fd,&ev,sizeof(ev));
		if(r != sizeof(ev))
		{
			perror("read ev error\n");
			return -2;
		}
		if(ev.type == EV_ABS && ev.code ==ABS_X)
		{
			x = ev.value ;
		}
		if(ev.type == EV_ABS && ev.code ==ABS_Y)
		{
			y = ev.value ;
		}
		//printf("(%d , %d)\n",x,y);
		//判断按下去了
		if( ev.type == EV_KEY  && ev.code == BTN_TOUCH && ev.value != 0)
		{
			printf("down(%d,%d)",x,y);
			x_start = x;
			y_start = y ;
		}
		//弹起来了
		if( ev.type == EV_KEY  && ev.code == BTN_TOUCH && ev.value == 0)
		{
			printf("up(%d,%d)",x,y);
			x_stop = x;
			y_stop = y;
			break;
		}
	}
	//发生了X轴方向地滑动
	if(    abs(x_start - x_stop) -  abs(y_start - y_stop)  > 0  && abs(x_start - x_stop) > 30   )
	{
		if(x_stop - x_start  > 0 )
		{
			return 4 ;
		}
		else
			return 3;
	}
	//发生了Y轴方向地滑动
	//自己做
	if(		abs(y_start - y_stop)-abs(x_start-x_stop) >0 &&abs(y_start -y_stop)>30)
		{
			if(y_stop - y_start >0)
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
	
	if(abs(x_start - x_stop) <= 30||abs(y_start -y_stop)<=30)
	{
		return 5;
	}
}

void end()
{
	close(fd);
	munmap(p,800*480*4);
}
