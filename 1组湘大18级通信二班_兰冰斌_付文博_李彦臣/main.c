#include "lcd.h"
#include "bmp.h"
#include "led.h"
#include "show_word.h"
#include<stdio.h>
#include<time.h>
#include <pthread.h>
int *p =  NULL;

int main()
{		
	
	init();//´ò¿ªÖ¡»º³å Ó³Éä
	front_cover();
	system("madplay ./qt.mp3 &");
	printf("---------------------");

	while(1){
		int d=get_finger_slide_direction();

		if(d==5)
		{
			printf("ÇåÈ«ÆÁ\n");
	        brush_lcd(0x00FFFFFF);
	        break;
		}
	}
//	char *fd9[10];
	while(1)
	{
		int f=get_finger_slide_direction();
		
		
	if (f==1)/*·ÖÆÁ*/ 
	{
	int a=get_finger_slide_direction();
	switch(a)
	{	case(5):printf("ÇåÈ«ÆÁ");
		        brush_lcd(0x00FFFFFF);
		        break;

	default: 
						/*Ëæ»úÉú³ÉÍ¼Æ¬´ò¿ªÊ®ÕÅÍ¼Æ¬*/ 
		 		srandom((unsigned)time(NULL));/*äº§ç”Ÿéšæœºæ•°*/ 
 		int b=(rand()%10);
 		int c=(rand()%10);
// 		char buf[20];
// 		sprintf(buf,"./%d.bmp",c);
// 		show_bmp(buf,0,0)
		int u=get_finger_slide_direction();
 		for(int i=0;i<10&&u!=0;)
 		{	if(b!=c)
	 	{
	 		 	char buf[20];
 				sprintf(buf,"./%d.bmp",c);
 				show_bmp(buf,0,0);
		 //show_bmp(fd9[c],0,0);
		 i++;}
 			b=c;
 			c=rand()%10;}
	}
	}
	else if(f==2)
	{/*¿ØÖÆµÆ*/ 
	while(1)
	{
	int l=get_finger_slide_direction();
	switch(l)
	{
		case 1 :printf("ÏòÉÏÒÆ¶¯\n");
				cmd_led(1,7);
		 		break; 
		
		case 2 :printf("ÏòÏÂÒÆ¶¯\n");
				cmd_led(1,8);
				 break;
		case 3 :printf("Ïò×óÒÆ¶¯\n");
				cmd_led(1,9);
				 break;
		case 4 :printf("ÏòÓÒÒÆ¶¯\n");
				cmd_led(1,10);
				 break;
		case 5:printf("¹Ø±ÕµÆ¹â");
				cmd_led(0,7);
				cmd_led(0,8);
				cmd_led(0,9);
				cmd_led(0,10);
				brush_lcd(0x00FFFFFF);
//      case 6£ºprint("ÇĞ»»ÕÕÆ¬\n") ;
// 		srandom((unsigned)time(NULL));/*²úÉúËæ»úÊı*/ 
// 		int b=(rand()%10);
// 		int c=(rand()%10);
// 		for(int i=0;i<10;)
// 	
// 		{	if(b!=c)
//	 	{
//		 show_bmp(fd9[c],0,0);
//		 i++;}
// 			b=c;
// 			c=rand()%10;
//	 }
//	}
//	}
//		        break;
//		case(7):print("Ë¢ÆÁ")£»
//                brush_lcd(0x00FFFFFF);
//			    break; 
				
			
	}
	break;
	}}
	}
	system("pkill -9 madplay");
	end();//¹Ø±ÕÖ¡»º³åÉè±¸ÎÄ¼ş ½â³ıÓ³Éä
}
