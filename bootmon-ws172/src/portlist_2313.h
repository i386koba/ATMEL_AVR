/*********************************************************************
 *	ポート名称	,  アドレス , 属性（バイト幅、よく参照されるかどうか）
 *********************************************************************
 */
PortList portList[]={
	{"DIDR"		,	_SFR_IO8(0x01)},
	{"UBRRH"	,	_SFR_IO8(0x02)},
	{"UCSRC"	,	_SFR_IO8(0x03)},
	{"ACSR"		,	_SFR_IO8(0x08)},
	{"UBRRL"	,	_SFR_IO8(0x09)},
	{"UCSRB"	,	_SFR_IO8(0x0A)},
	{"UCSRA"	,	_SFR_IO8(0x0B)},
	{"UDR"		,	_SFR_IO8(0x0C)},
	{"RXB"		,	_SFR_IO8(0x0C)},
	{"TXB"		,	_SFR_IO8(0x0C)},
	{"USICR"	,	_SFR_IO8(0x0D)},
	{"USISR"	,	_SFR_IO8(0x0E)},
	{"USIDR"	,	_SFR_IO8(0x0F)},
	{"PIND"		,	_SFR_IO8(0x10)|QQ},
	{"DDRD"		,	_SFR_IO8(0x11)},
	{"PORTD"	,	_SFR_IO8(0x12)|QQ},
	{"GPIOR0"	,	_SFR_IO8(0x13)},
	{"GPIOR1"	,	_SFR_IO8(0x14)},
	{"GPIOR2"	,	_SFR_IO8(0x15)},
	{"PINB"		,	_SFR_IO8(0x16)|QQ},
	{"DDRB"		,	_SFR_IO8(0x17)},
	{"PORTB"	,	_SFR_IO8(0x18)|QQ},
	{"PINA"		,	_SFR_IO8(0x19)|QQ},
	{"DDRA"		,	_SFR_IO8(0x1A)},
	{"PORTA"	,	_SFR_IO8(0x1B)|QQ},
	{"EECR"		,	_SFR_IO8(0x1C)},
	{"EEDR"		,	_SFR_IO8(0x1D)},
	{"EEAR"		,	_SFR_IO8(0x1E)},
	{"EEARL"	,	_SFR_IO8(0x1E)},
	{"PCMSK"	,	_SFR_IO8(0x20)},
	{"WDTCSR"	,	_SFR_IO8(0x21)},
	{"TCCR1C"	,	_SFR_IO8(0x22)},
	{"GTCCR"	,	_SFR_IO8(0x23)},
	{"ICR1"		,	_SFR_IO16(0x24)},
	{"ICR1L"	,	_SFR_IO8(0x24)},
	{"ICR1H"	,	_SFR_IO8(0x25)},
	{"CLKPR"	,	_SFR_IO8(0x26)},
	{"OCR1B"	,	_SFR_IO16(0x28)},
	{"OCR1BL"	,	_SFR_IO8(0x28)},
	{"OCR1BH"	,	_SFR_IO8(0x29)},
	{"OCR1"		,	_SFR_IO16(0x2A)},
	{"OCR1L"	,	_SFR_IO8(0x2A)},
	{"OCR1H"	,	_SFR_IO8(0x2B)},
	{"OCR1A"	,	_SFR_IO16(0x2A)},
	{"OCR1AL"	,	_SFR_IO8(0x2A)},
	{"OCR1AH"	,	_SFR_IO8(0x2B)},
	{"TCNT1"	,	_SFR_IO16(0x2C)},
	{"TCNT1L"	,	_SFR_IO8(0x2C)},
	{"TCNT1H"	,	_SFR_IO8(0x2D)},
	{"TCCR1B"	,	_SFR_IO8(0x2E)},
	{"TCCR1A"	,	_SFR_IO8(0x2F)},
	{"TCCR0A"	,	_SFR_IO8(0x30)},
	{"OSCCAL"	,	_SFR_IO8(0x31)},
	{"TCNT0"	,	_SFR_IO8(0x32)},
	{"TCCR0B"	,	_SFR_IO8(0x33)},
	{"MCUSR"	,	_SFR_IO8(0x34)},
	{"MCUCR"	,	_SFR_IO8(0x35)},
	{"OCR0A"	,	_SFR_IO8(0x36)},
	{"SPMCSR"	,	_SFR_IO8(0x37)},
	{"TIFR"		,	_SFR_IO8(0x38)},
	{"TIMSK"	,	_SFR_IO8(0x39)},
	{"EIFR"		,	_SFR_IO8(0x3A)},
	{"GIMSK"	,	_SFR_IO8(0x3B)},
	{"OCR0B"	,	_SFR_IO8(0x3C)},

	{NULL,0,0}
};

/*********************************************************************
 *
 *********************************************************************
 */
