/* 
 * File:   config.h
 * Author: mike
 *
 * Created on August 18, 2013, 11:53 AM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif

// PIC16F616 Configuration Bit Settings

#include <xc.h>

// CONFIG
#pragma config FOSC = INTOSCCLK // Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA4/OSC2/CLKOUT pin, I/O function on RA5/OSC1/CLKIN)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select bit (MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config IOSCFS = 8MHZ    // Internal Oscillator Frequency Select bit (8 MHz)
#pragma config BOREN = ON       // Brown-out Reset Selection bits (BOR enabled)

#ifdef	__cplusplus
}
#endif

#endif	/* CONFIG_H */

