/* Based on the explanations given above, write a program to store marks for 100 students and then to input and output the marks. */

#include <stdio.h>

int main(void){
	int std_num, i;
	double marks[100];
	
	do {
		std_num++;
		printf("Enter Student #%i Marks : ", std_num);
		scanf("%lf", &marks[std_num]);
	} while (marks[std_num] != 0);
	
	for (i=1; i<std_num; i++){
		printf("Marks for Student Number #%i : %lf\n", i, marks["%i", i]);
	}
	
	return 0;
}
