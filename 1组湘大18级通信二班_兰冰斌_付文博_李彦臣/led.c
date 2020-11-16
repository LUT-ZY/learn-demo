#include"led.h"
void cmd_led(int x,int y)
{
	int led_fd = open("/dev/led_drv",O_RDWR);
	if(led_fd < 0)
	{
		printf("open lcd_fd error\n");
		return ;
	}
	
	//2.控制led灯
	unsigned char cmd1[2];
	cmd1[0] = x;   //灯的状态 1代表亮 0代表灭
	cmd1[1] = y;   //灯的编号 7 8 9 10
	
	int ret2 = write(led_fd, cmd1, 2);
	close(led_fd);
}

	
