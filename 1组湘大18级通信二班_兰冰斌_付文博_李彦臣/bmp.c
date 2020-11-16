#include "bmp.h"
extern int * p ;
void brush_lcd(int color)
{
	int i,j;
	for(i = 0; i < 480; i++)
	{	
		for(j = 0; j < 800; j++)
		{
			draw_point(j, i, color);
		}
	}
}
 
/*
	功能函数：对一个坐标点为（x,y）的像素点上色。
	参数： 
		@x : 像素点的X轴坐标值
		@y ：像素点的Y轴坐标值
		@color ： 要画的颜色
*/
void draw_point (  int x, int y, int color )
{
	if(x>=0 && x<800 && y>=0 && y<480)
		
		*(p+x+y*800) = color;//p定义成全局变量
}	 



void show_bmp(char * pathname ,int x,int y)
{
	int fd = open(pathname , O_RDWR);
	
	int width ;
	int height;
	int depth ;
	unsigned char buf[4];
	//读取宽度
	lseek(fd,0x12,SEEK_SET);
	read(fd,buf,4);
	width = buf[3] << 24 | buf[2] << 16 | buf[1] << 8  | buf[0] ;
	
	//读取高度
	read(fd,buf,4);
	height = buf[3] << 24 | buf[2] << 16 | buf[1] << 8  | buf[0] ;
	
	//读取色深
	lseek(fd,0x1c,SEEK_SET);
	read(fd,buf,2);
	depth = buf[1] << 8 | buf[0];
	
	
	printf("width = %d   height = %d  depth = %d\n",width,height,depth );
	
	int laizi=0 ; 
	if( abs(width)*depth /  8  % 4 != 0          )
	{
		laizi = 4 - abs(width)*depth / 8 % 4;
	}
	
	int line_bytes =  abs(width)*depth / 8   +  laizi ;
	int total_bytes = line_bytes * abs(height);
	
	lseek(fd,54,SEEK_SET);
	unsigned char * p2 = malloc(total_bytes);
	read(fd,p2,total_bytes);
	
	unsigned char a,r,g,b;
	int color ;
	int x0,y0;
	int i=0;
	for(y0=0;y0<abs(height);y0++)
	{
		for(x0=0;x0<abs(width);x0++)
		{
			b=p2[i++];
			g=p2[i++];
			r=p2[i++];
			if(depth == 24)
			{
				a=0;
			}
			else if(depth ==32)
			{
				a = p2[i++];
			}
		color = a<<24 | r<<16 | g<<8 | b ;
		draw_point(  width > 0? x+x0 : abs(width)+x-1-x0 ,
					height >0? y+height-1-y0: y+y0  ,
					color	);
		}
		i=i+laizi;  //跳过癞子 
		
	
	}
	
	free(p2);
	close(fd);	
}
