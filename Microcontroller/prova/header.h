/*
 ************************************************   
 *                                              *
 *   Author: Igor Becker                        *               
 *   Date:   23/05/2020                         *
 *   Github: https://github.com/proudynyu       *
 *   Title:  Header definition for main.c       *
 *                                              *
 ************************************************
*/

<<<<<<< HEAD
#define F_CPU 16000000

// Library
#include <avr/io.h>
#include <util/delay.h>

// Macors
=======
#ifndef HEADER_H
#define HEADER_H

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
#define set_bit(y, bit_x) (y |= (1<<bit_x))
#define clr_bit(y, bit_x) (y &= ~(1<<bit_x))
#define cpl_bit(y, bit_x) (y ^= (1<<bit_x))
#define tst_bit(y, bit_x) (y & (1<<bit_x))

<<<<<<< HEAD
// Proto Functions
void pinMode(unsigned char pin, unsigned char mode);
void digitalRead(unsigned char pin);

// Functions definitions
void pinMode(unsigned char pin, unsigned char mode) {
=======
#define IN0	    PD0
#define IN1	    PD1
#define IN2	    PD2
#define IN3	    PD3
#define IN4	    PD4
#define IN5	    PD5
#define IN6	    PD6
#define IN7	    PD7
#define IN8	    PB0
#define IN9	    PB1
#define IN10    PB2
#define IN11    PB3
#define IN12    PB4
#define IN13    PB5
#define IN14    PC0
#define IN15    PC1
#define IN16    PC2
#define IN17    PC3
#define IN18    PC4
#define IN19    PC5

void pMode(unsigned char pin, unsigned char mode);
char dRead(unsigned char pin);
void dWrite(unsigned char pin, unsigned char val);

void pMode(unsigned char pin, unsigned char mode) {
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
    unsigned char value;
    unsigned char port;
    unsigned char ddrx;

    switch(pin) {
        case 0:
<<<<<<< HEAD
            value = PD0;
=======
            value = IN0;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 1:
<<<<<<< HEAD
            value = PD1;
=======
            value = IN1;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 2:
<<<<<<< HEAD
            value = PD2;
=======
            value = IN2;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 3:
<<<<<<< HEAD
            value = PD3;
=======
            value = IN3;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 4:
<<<<<<< HEAD
            value = PD4;
=======
            value = IN4;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 5:
<<<<<<< HEAD
            value = PD5;
=======
            value = IN5;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 6:
<<<<<<< HEAD
            value = PD6;
=======
            value = IN6;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 7:
<<<<<<< HEAD
            value = PD7;
=======
            value = IN7;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTD;
            ddrx = DDRD;
            break;
        case 8:
<<<<<<< HEAD
            value = PB0;
=======
            value = IN8;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTB;
            ddrx = DDRB;
            break;
        case 9:
<<<<<<< HEAD
            value = PB1;
=======
            value = IN9;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTB;
            ddrx = DDRB;
            break;
        case 10:
<<<<<<< HEAD
            value = PB2;
=======
            value = IN10;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTB;
            ddrx = DDRB;
            break;
        case 11:
<<<<<<< HEAD
            value = PB3;
=======
            value = IN11;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTB;
            ddrx = DDRB;
            break;
        case 12:
<<<<<<< HEAD
            value = PB4;
=======
            value = IN12;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTB;
            ddrx = DDRB;
            break;
        case 13:
<<<<<<< HEAD
            value = PB5;
            port = PORTB;
            ddrx = DDRB;
            break;
        case 'A0':
            value = PC0;
            port = PORTC;
            ddrx = DDRB;
            break;
        case 'A1':
            value = PC1;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 'A2':
            value = PC2;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 'A3':
            value = PC3;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 'A4':
            value = PC4;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 'A5':
            value = PC5;
=======
            value = IN13;
            port = PORTB;
            ddrx = DDRB;
            break;
        case 14:
            value = IN14;
            port = PORTC;
            ddrx = DDRB;
            break;
        case 15:
            value = IN15;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 16:
            value = IN16;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 17:
            value = IN17;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 18:
            value = IN18;
            port = PORTC;
            ddrx = DDRC;
            break;
        case 19:
            value = IN19;
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
            port = PORTC;
            ddrx = DDRC;
            break;
        default:
            break;
    }

<<<<<<< HEAD
    if (mode == 'OUTPUT'){
        set_bit(ddrx, value);
        cpl_bit(port, value);
    }
    else if (mode == 'INPUT') {
=======
    if (mode == "OUTPUT" || mode == 1){
        set_bit(ddrx, value);
    }
    else if (mode == "INPUT" || mode == 0) {
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
        clr_bit(ddrx, value);
        set_bit(port, value);
    }
}

<<<<<<< HEAD
char digitalRead(unsigned char pin) {
}
=======
char dRead(unsigned char pin) {
    unsigned char value;
	unsigned char pinx;

	switch(pin) {
		case 0:
			value = IN0;
			pinx = PIND;
			break;
		case 1:
			value = IN1;
			pinx = PIND;
			break;
		case 2:
			value = IN2;
			pinx = PIND;
			break;
		case 3:
			value = IN3;
			pinx = PIND;
			break;
		case 4:
			value = IN4;
			pinx = PIND;
			break;
		case 5:
			value = IN5;
			pinx = PIND;
			break;
		case 6:
			value = IN6;
			pinx = PIND;
			break;
		case 7:
			value = IN7;
			pinx = PIND;
			break;
		case 8:
			value = IN8;
			pinx = PINB;
			break;
		case 9:
			value = IN9;
			pinx = PINB;
			break;
		case 10:
			value = IN10;
			pinx = PINB;
			break;
		case 11:
			value = IN11;
			pinx = PINB;
			break;
		case 12:
			value = IN12;
			pinx = PINB;
			break;
		case 13:
			value = IN13;
			pinx = PINB;
			break;
		case 14:
			value = IN14;
			pinx = PINC;
			break;
		case 15:
			value = IN15;
			pinx = PINC;
			break;
		case 16:
			value = IN16;
			pinx = PINC;
			break;
		case 17:
			value = IN17;
			pinx = PINC;
			break;
		case 18:
			value = IN18;
			pinx = PINC;
			break;
		case 19:
			value = IN19;
			pinx = PINC;
			break;
		default:
			break;
	}
	
	unsigned char output = tst_bit(pinx, value);
	return output;
}

void dWrite(unsigned char pin, unsigned char val) {
	unsigned char portx;

	switch(pin) {
		case 0:
			portx = PORTD;
			break;
		case 1:
			portx = PORTD;
			break;
		case 2:
			portx = PORTD;
			break;
		case 3:
			portx = PORTD;
			break;
		case 4:
			portx = PORTD;
			break;
		case 5:
			portx = PORTD;
			break;
		case 6:
			portx = PORTD;
			break;
		case 7:
			portx = PORTD;
			break;
		case 8:
			portx = PORTB;
			break;
		case 9:
			portx = PORTB;
			break;
		case 10:
			portx = PORTB;
			break;
		case 11:
			portx = PORTB;
			break;
		case 12:
			portx = PORTB;
			break;
		case 13:
			portx = PORTB;
			break;
		case 14:
			portx = PORTC;
			break;
		case 15:
			portx = PORTC;
			break;
		case 16:
			portx = PORTC;
			break;
		case 17:
			portx = PORTC;
			break;
		case 18:
			portx = PORTC;
			break;
		case 19:
			portx = PORTC;
			break;
		default:
			break;
	}
    if (val == 1){
        set_bit(portx, val);
    }
    else {
        clr_bit(portx, val);
    }
}

#endif
>>>>>>> fca608b6ccea969b03ca6c3ab5c5557907f93d6c
