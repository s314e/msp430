/*
 * FBF.h
 *
 *  Created on: 28/01/2015
 *      Author: Mauricio Rios
 *
 *
 *
 *
 *      The FBF is and abreviation for FuntionalBlockFunctions, this header file contain almost all
 *      the software necessary for drive the Msp430's Funtional Block, every drive is set on interrupt mode.
 *
 *      Blocks included:
 *      I/O interrupts,pull-up/down resistor,
 *      Analog almost all channels with a single reading or multi-reading
 *      Timer0 and Timer3
 *      pwm,capture/compare
 *      uart_init
 *      i2c master mode
 *
 */

#ifndef FBF_H_
#define FBF_H_



void inicioADC(){
	ADC10CTL0 |= (ENC | ADC10SC);
	}


void Adc(){
	ADC10CTL1 =INCH_5|ADC10SSEL_2|CONSEQ_3 	|ADC10DIV_7;        // Channel 5, ADC10CLK/4
	ADC10CTL0 = ADC10SHT_3|MSC|ADC10IE|ADC10ON|ADC10SR|REFBURST;
	ADC10AE0 = 0x10;


	//P1.5 ADC option�
}

void I2CReceiver(){


	P1SEL |= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0
	  P1SEL2|= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0
	  UCB0CTL1 |= UCSWRST;                      // Enable SW reset
	  UCB0CTL0 = UCMODE_3 + UCSYNC;             // I2C Slave, synchronous mode
	  UCB0I2COA = 0x48;                         // Own Address is 048h
	  UCB0CTL1 &= ~UCSWRST;                     // Clear SW reset, resume operation
	  IE2 |= UCB0RXIE;                          // Enable RX interrupt

}


void I2Ctransmitter(){

	  P1SEL |= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0
	  P1SEL2|= BIT6 + BIT7;                     // Assign I2C pins to USCI_B0
	  UCB0CTL1 |= UCSWRST;                      // Enable SW reset
	  UCB0CTL0 = UCMST + UCMODE_3 + UCSYNC;     // I2C Master, synchronous mode
	  UCB0CTL1 = UCSSEL_2 + UCSWRST;            // Use SMCLK, keep SW reset
	  UCB0BR0 = 12;                             // fSCL = SMCLK/12 = ~100kHz
	  UCB0BR1 = 0;
	  UCB0I2CSA = 0x48;                         // Slave Address is 048h
	  UCB0CTL1 &= ~UCSWRST;                     // Clear SW reset, resume operation
	  IE2 |= UCB0TXIE;                          // Enable TX interrupt
      //TXData = 0x00;                            // Holds TX data
}

void enable_interrupts()
{
	_BIS_SR(GIE);
	__enable_interrupt();
	__bis_SR_register(GIE);
}



void configport()
{
	P1DIR|=(BIT7|BIT4|BIT5|BIT3);
	P1DIR&=~BIT2;
	P1SEL&=~(BIT2|BIT7|BIT4|BIT5|BIT3);
	P1SEL2&=~(BIT2|BIT7|BIT4|BIT5|BIT3);

    P1REN=BIT2;
    P1OUT=0X00;


	P2DIR		=0XBF;
	P2SEL 		=0X00;
	P2SEL2 	=0X00;
	P2OUT	=0X00;
	P2REN		=0X00;
}

void uart_init()
{
	P1SEL |=(BIT1 | BIT2);
	P1SEL2 |=(BIT1 | BIT2);

	UCA0CTL1 = UCSWRST;
	UCA0CTL1 |= UCSSEL_2;                     // SMCLK
	UCA0BR0 = 208;//130;                            // 16MHz 9600 PREESCALAR
	UCA0BR1 = 0;//6;                             //(UCAxBR0 + UCAxBR1 � 256)
	UCA0MCTL =0X00;//0x0c;//UCBRS0;                        // Modulation UCBRSx = 1
	UCA0CTL1 &= ~UCSWRST;
	IE2 |= 0;//UCA0TXIE;
}

void clk_init()
{
	WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
	BCSCTL1 =CALBC1_16MHZ;
	BCSCTL2 =DIVS_3;
	DCOCTL = CALDCO_16MHZ;

}

void interrupcion()
{
	P2IE=0X03; //Habilita la interrupcion asociada a P1IFG
	P2IFG=0X00; // set when a interrupt ocurrs
	P2IES=0X0000; // INTERRUPT EDGE SELECT  EDGE SELECTS THE INTERRUPT EDGE FOR THE CORRESPONDIN I/O, 0 MEANS low-to-high transition, 1 means a high-to-low transition


}



void external_events_init(){
// this function recieve the input in rising/fall/both edges and store the count when it happend and when it ends, after that it gives to you a to values of
//	count event one and event two it is on p2.0 pin which is the cci1 from timer3, this pin is on pull-down resistor.see times and etc.

			P2OUT=0X00;
			P2DIR&=(~0X01);
			P2SEL|=0X01;
			P2SEL2&=(~0X01);
			P2REN=0X00;

			TA1CTL=ID_3|TASSEL_2|MC_2;
			TA1CCTL0=CAP|CM_3|CCIE|SCS;
}



void configtimer3(){
	TA1CCR0=20000;
	TA1CCTL0=CCIE; //no capture mode+CCIA+Asynchronous en capture mode+modo comparacion+
	TA1CTL=ID_3|TASSEL_1|MC_1|TAIE;
}


void inicio()
{
	clk_init();
	uart_init();
	//configport();
   //Adc();
	//timer0();
	//enable_interrupts();
}






#endif /* FBF_H_ */
