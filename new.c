/*
 * =====================================================================================
 *
 *       Filename:  new.c
 *       	Usage:  ./new.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/17/2017 12:24:56 AM
 *       Compiler:  gcc -Wall -Werr
 *         Author:  Robert Christensen (), robertchristensen1@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
void AnnulusMoment(float, float, float *); //I don't know what the * is, but the book used it and I can't get it to work without it.

/* Main Program */
int main(void)
{
	//Set floats as two radii and the answer
	float r1, r2, second;
	//Print and scan two entries
	printf("Enter a value for the outer radius:\n");
	scanf("%f", &r1);

	printf("Enter a value for the inner radius:\n");
	scanf("%f", &r2);
	//Annulus Moment
	AnnulusMoment(r1, r2, &second);

	printf("The second moment of inertia is %6.2f\n", second);

	return 0;
}
//Definition goes after return 0
void AnnulusMoment(float num1, float num2, float *secondmoment)
{
	*secondmoment = .785398 * ((num1 * num1 * num1 * num1) - (num2 * num2 * num2 * num2));
}
/* Function Defenitions */


