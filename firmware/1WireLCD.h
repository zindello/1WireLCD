#ifndef MBED_1WireLcd_H
#define MBED_1WireLcd_H

#define Clear 1
#define GoToFirst 2
#define WriteLeft 4
#define WriteRight 6
#define CloseLcd 8
#define HidePointer 12
#define PointerBottom 14
#define FlashPointer 15
#define PointerBack 16
#define ShiftRight 24
#define ShiftLeft 28 
#define FirstLine 128
#define SecondLine 192 

#define TwoLine8Bit 56 
#define OneLine8Bit 48
#define TwoLine4Bit 40
#define OneLine4Bit 32

void one_wire(unsigned char data);
void lcd_putc(unsigned char);
void lcd_clear(void);
void lcd_printf(const char * a);
void lcd_position(unsigned char x, unsigned char y);
void lcd_command(unsigned char a);
void lcd_init(void);

#endif
