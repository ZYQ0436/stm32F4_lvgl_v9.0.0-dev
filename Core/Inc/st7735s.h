#ifndef __ST7735S_H
#define __ST7735S_H

#include "main.h"

//����LCD�ĳߴ�
#define LCD_W 128
#define LCD_H 128

//����Һ����˳ʱ����ת���� 	0-0����ת��1-90����ת��2-180����ת��3-270����ת
#define USE_VERTICAL    0   /* ���������������棬���Ͻ�Ϊ����ԭ�� */
#define USE_HORIZONTAL  1   /* �������������ұߣ����Ͻ�Ϊ����ԭ�� */

typedef struct  
{										    
	uint8_t  width;			//LCD ���
	uint8_t  height;			//LCD �߶�	
	uint8_t  dir;			  //���������������ƣ�0��������1��������	
	uint8_t  wramcmd;		//��ʼдgramָ��
	uint8_t  setxcmd;		//����x����ָ��
	uint8_t  setycmd;		//����y����ָ��	
  uint8_t  xoffset;    
  uint8_t	 yoffset;
	uint16_t id;				  //LCD ID
	uint16_t point_color;
	uint16_t back_color;
}_lcd_dev; 

extern _lcd_dev lcddev;

void Lcd_Init(void);
void Lcd_On(void);
void Lcd_Off(void);
void Lcd_Reset(void);
void Lcd_Clear(uint16_t Color);
void LCD_Fill(uint8_t sx, uint8_t sy, uint8_t ex, uint8_t ey, uint16_t color);
void LCD_Fill_lvgl(uint8_t sx, uint8_t sy, uint8_t ex, uint8_t ey, uint16_t *color);
void Lcd_WriteData(uint8_t Data);
void Lcd_WriteCmd(uint8_t Cmd);
void Lcd_WriteReg(uint8_t reg, uint8_t Data);
void Lcd_SetXY(uint8_t x, uint8_t y);
void Lcd_SetRegion(uint8_t x_start, uint8_t y_start, uint8_t x_end, uint8_t y_end);
void Lcd_WriteData_16Bit(uint16_t Data);
void Lcd_Direction(uint8_t direction);

void Lcd_DrawPoint(uint8_t x, uint8_t y);
void Lcd_DrawPix(uint8_t x, uint8_t y, uint16_t color);
void Lcd_DrawLine(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2);

#endif
