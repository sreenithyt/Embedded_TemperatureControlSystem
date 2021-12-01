/**
 * @file Activity4.c
 * @author sreenithyt (sreenithy27@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-12-1
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"Activity4.h"

/**
 * @brief A program to initialize the UART serial communication
 * 
 * @param ubrr_value 
 */
void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}


/**
 * @brief Function to read characters coming from other UART port
 * 
 * @return char 
 */
char UARTreadchar(){

while(!(UCSR0A & (1<<RXC0))){

}

return UDR0;

}

/**
 * @brief Function to write characters to send it to other UART port
 * 
 * @param data 
 */
void UARTwritecharacter(char data){

 while(!(UCSR0A &(1<<UDRE0))){

}
UDR0 = data;

}
