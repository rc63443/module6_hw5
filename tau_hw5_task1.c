/*
 * =====================================================================================
 *
 *       Filename:  tau_hw5_task1.c
 *       	Usage:  ./tau_hw5_task1.c
 *    Description:  Homework 5 task 1
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:37:45 PM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Robert Christensen (), robertchristensen1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
void AnnulusMoment(float a, float b)

/* Main Program */
int main(void)
{
	float r1;
	float r2;
	float second;

	printf("Please enter a value for outer radius (r2):\n");
	scanf("%f", &r2);

	printf("Please enter a value for inner radius (r1):\n");
	scanf("%f", &r1);
	AnnulusMoment(r1,r2,second);
	second = AnnulusMoment(r1,r2);

	printf("The second moment of inertia is %5.2f.", second);
	

	return 0;
}


/* Function Defenitions */
void AnnulusMoment(float num2, float num1, float *second)
{
	second  = .785398 * ((r2*r2*r2*r2)-(r1*r1*r1*r1));
}

