/* Write  a function sum_n_avg that has three type double input parameters and two output parameters.
The function computes the sum and the average of its three input arguments and relays its results through two output parameters. */

#include <stdio.h>

void sum_n_avg (double num1, double num2, double num3, double *sum, double *avg){
	*sum = num1 + num2 + num3;
	*avg = *sum/3;
}

int main (void){
	double num1=20.0, num2=5.5, num3=4.5, sum, avg;
	sum_n_avg (num1, num2, num3, &sum, &avg);
	printf("Sum : %lf\nAvg : %lf\n", sum, avg);
	return 0;
}
