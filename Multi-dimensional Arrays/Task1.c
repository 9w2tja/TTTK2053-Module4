/* Write a program to access the two-dimensional arrays of subjects and grades as described in the video. */

#include <stdio.h>
#define STUDENTS 10
#define SUBJECTS 5

int main(void){
	int grades [STUDENTS][SUBJECTS]={{10,11,12,13,14},{20,21,22,23,24},{30,31,32,33,34},{40,41,42,43,44},{50,51,52,53,54},{60,61,62,63,64},{70,71,72,73,74},{80,81,82,83,84},{90,91,92,93,94},{100,100,100,100,100}};
	int std_num, sub_num, i, j;

	printf("Select Student Number : ");
	scanf("%i", &std_num);
	printf("Select Subject Number : ");
	scanf("%i", &sub_num);
	
	printf("Grade for Student Number #%i and Subject Number #%i : %i", std_num, sub_num, grades[std_num][sub_num]);
	return 0;
}
