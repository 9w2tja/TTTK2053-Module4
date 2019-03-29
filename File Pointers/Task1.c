/* Task 1: Guess what is the output for file outp ? */

#include <stdio.h>

int main(void)
{
	FILE *inp; /* pointer to input file */
	FILE *outp; /* pointer to ouput file */
	errno_t err;
	double item;
	int input_status; /* status value returned by fscanf */
	
	/* Prepare files for input or output */
	err = fopen_s(&inp, "indata.txt", "r");
	err = fopen_s(&outp, "outdata.txt", "w");
	
	/* Input each item, format it, and write it */
	input_status = fscanf_s(inp, "%lf", &item);
	while (input_status == 1) {
		fprintf(outp, "%.2f\n", item);
		input_status = fscanf_s(inp, "%lf", &item);
	}
	
	/* Close the files */
	fclose(inp);
	fclose(outp);
	
	return (0);
}
/*
Create File indata.txt with following data :


344 55 6.3556 9.4
43.123 47.596
*/
