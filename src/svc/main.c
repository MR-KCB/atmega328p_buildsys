/*****************************************************************************/
/* File: main.c                                                              */
/*                                                                           */
/* Description:                                                              */
/*                                                                           */
/*                                                                           */
/* Date: 2021/12/28                                                          */
/*                                                                           */
/*****************************************************************************/
                                                                               
                                                                                                                                                             
/*****************************************************************************/
/* Include definitions                                                       */
/*****************************************************************************/

#include "main.h"
#include "device/startup.h"
#include "dio.h"
#include "util/delay.h"
/*****************************************************************************/
/* Macro definitions                                                         */
/*****************************************************************************/                                                                             
                                                                               
/*****************************************************************************/
/* Constant definitions                                                      */
/*****************************************************************************/
                                                                               
                                                                               
/*****************************************************************************/
/* Prototype definitions                                                     */
/*****************************************************************************/
                                                                               
                                                                               
/*****************************************************************************/
/* Global Variables                                                          */
/*****************************************************************************/
                                                                               
                                                                               
/*****************************************************************************/
/* Public functions                                                          */
/*****************************************************************************/

/**
 * @brief Run as principal main instrucction 
 * 
 */
int main(void) {
    /* All init routines here */
    startup_init(); // specific mcu instructtions (e.g. clock source)
    SetDirection(kPortB, kOutput, kBit5, kLow);
    SetOutputValue(kPortB, kBit5, kHigh);
    
    for (;;) {
        SetOutputValue(kPortB, kBit5, kHigh);
        _delay_ms(1000);
        SetOutputValue(kPortB, kBit5, kLow);
        _delay_ms(1000);
    }
    return 0;
}                                                                         
                                                                               
/*****************************************************************************/
/* Static functions                                                          */
/*****************************************************************************/
                                                                               
                                                                               