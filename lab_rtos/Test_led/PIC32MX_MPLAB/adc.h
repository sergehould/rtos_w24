/* ADC converter functions
 *		
 *   *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author        	Date      			Comments on this revision		
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Serge Hould		December 15 2016   	-v1.1
 * Serge Hould		March 16, 22     	-v2	change function names
 *
 *
 * 
 *
 **********************************************************************/
 
#ifndef ADC_H
#define ADC_H

#include <xc.h>

void adc_init(void);
unsigned int adc_read( int );

#endif

