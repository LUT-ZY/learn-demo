#include"led.h"
void cmd_led(int x,int y)
{
	int led_fd = open("/dev/led_drv",O_RDWR);
	if(led_fd < 0)
	{
		printf("open lcd_fd error\n");
		return ;
	}
	
	//2.����led��
	unsigned char cmd1[2];
	cmd1[0] = x;   //�Ƶ�״̬ 1������ 0������
	cmd1[1] = y;   //�Ƶı�� 7 8 9 10
	
	int ret2 = write(led_fd, cmd1, 2);
	close(led_fd);
}

	
