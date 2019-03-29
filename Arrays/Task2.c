/* Write an indexed for loop to fill an array prime such that element prime[0] contains the first prime number,
prime[1] the second prime number, and so on. The prime numbers will be provided as data. Also, write a loop that
calculates the sum of all the prime numbers stored. */

#include <stdio.h>

int main(void){
	int prime[10]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29}, loop, total;
	
	for (loop=0; loop<10; loop++){
		printf("Prime number #%i : %i\n", loop+1, prime[loop]);
		total += prime[loop];
	}
	printf("Total sum prime number : %i\n", total);
	
	return 0;
}
