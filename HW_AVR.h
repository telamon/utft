// *** Hardwarespecific functions ***
void UTFT::LCD_Writ_Bus(char VH,char VL, byte mode)
{   
	if(VH & 0x01)
		PORTD |= (1<<2);
	else
		PORTD &= ~(1<<2);
	if(VH & 0x02)
		PORTD |= (1<<3);
	else
		PORTD &= ~(1<<3);
	if (VH & 0x04)
		PORTD |= (1<<1);
	else
		PORTD &= ~(1<<1);
	if (VH & 0x08)
		PORTD |= (1<<0);
	else
		PORTD &= ~(1<<0);
	if (VH & 0x10)
		PORTD |= (1<<4);
	else
		PORTD &= ~(1<<4);
	if (VH & 0x20)
		PORTC |= (1<<6);
	else
		PORTC &= ~(1<<6);
	if (VH & 0x40)
		PORTD |= (1<<7);
	else
		PORTD &= ~(1<<7);
	if (VH & 0x80)
		PORTE |= (1<<6);
	else
		PORTE &= ~(1<<6);
	pulse_low(P_WR, B_WR);
	if(VL & 0x01)
		PORTD |= (1<<2);
	else
		PORTD &= ~(1<<2);
	if(VL & 0x02)
		PORTD |= (1<<3);
	else
		PORTD &= ~(1<<3);
	if (VL & 0x04)
		PORTD |= (1<<1);
	else
		PORTD &= ~(1<<1);
	if (VL & 0x08)
		PORTD |= (1<<0);
	else
		PORTD &= ~(1<<0);
	if (VL & 0x10)
		PORTD |= (1<<4);
	else
		PORTD &= ~(1<<4);
	if (VL & 0x20)
		PORTC |= (1<<6);
	else
		PORTC &= ~(1<<6);
	if (VL & 0x40)
		PORTD |= (1<<7);
	else
		PORTD &= ~(1<<7);
	if (VL & 0x80)
		PORTE |= (1<<6);
	else
		PORTE &= ~(1<<6);	
	pulse_low(P_WR, B_WR);

}

void UTFT::_set_direction_registers(byte mode)
{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
	DDRA = 0xFF;
	if (mode==16)
		DDRC = 0xFF;
#elif defined(__AVR_ATmega32U4__)
		pinMode(0,OUTPUT);
		pinMode(1,OUTPUT);
		pinMode(2,OUTPUT);
		pinMode(3,OUTPUT);
		pinMode(4,OUTPUT);
		pinMode(5,OUTPUT);
		pinMode(6,OUTPUT);
		pinMode(7,OUTPUT);
#else
	DDRD = 0xFF;
	if (mode==16)
	{
		DDRB |= 0x3F;
		DDRC |= 0x03;
	}
#endif

}
