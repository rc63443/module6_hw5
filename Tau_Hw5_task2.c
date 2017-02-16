/*
 * =====================================================================================
 *
 *       Filename:  Tau_Hw5_task2.c
 *       	Usage:  ./Tau_Hw5_task2.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:43 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tysen Bair (), tysenbair@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

#define MAX 10
/* Function Prototypes */

/* Main Program */
int main(void)
{

int mile;
double kilo;
	
	// headline
	
	printf(" Mile   =   Kilometer \n");
	printf("-----       --------- \n");
	
	// Starting
	
mile = 1;
	
while( mile <= MAX)
	{
		kilo = mile*1.61;
		printf("%3d%15.2f\n", mile, kilo);
		mile = mile + 1;
	}



	return 0;
}


/* Function Defenitions */


