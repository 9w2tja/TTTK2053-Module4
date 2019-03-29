/* TASK 1: Analyse the following programs and explain what the meaning of passing parameters by reference and compare it with passing parameters by value ? */

#include <stdio.h>
#include <math.h>
void separate(double num, char *signp, int *wholep, double *fracp);

int main(void)
{
	double value; /* input - number to analyze */
	char sn; /* output - sign of value */
	int whl; /* output - whole number magnitude of value */
	double fr; /* output - fractional part of value */
	
	/* Gets data */
	printf("Enter a value to analyze> ");
	scanf("%lf", &value);
	
	/* Separates data value into three parts */
	separate(value, &sn, &whl, &fr);
	
	/* Prints results */
	printf("Parts of %.4f\n sign: %c\n", value, sn);
	printf(" whole number magnitude: %d\n", whl);
	printf(" fractional part: %.4f\n", fr);
	
	return (0);
}

void separate(double num,  char *signp, int *wholep,  double *fracp) 
{

	double magnitude; /* local variable - magnitude of num */
	/* Determines sign of num */
	if (num < 0)
	*signp = '-';
	else if (num == 0)
	*signp = ' ';
	else
	*signp = '+';
	
	/* Finds magnitude of num (its absolute value) and separates it into
	whole and fractional parts */
	
	magnitude = fabs(num);
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;
}


/*
Enter a value to analyze> 35.817
Parts of 35.8170
sign: +
whole number magnitude: 35
fractional part: 0.8170
*/
