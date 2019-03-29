/* Task 2 : Add statements to program in Task 1 that count the number of items read and write the count (an integer) as the last line of the output file. */

#include <stdio.h>

int main(void)
{
	FILE *inp; /* pointer to input file */
	FILE *outp; /* pointer to ouput file */
	errno_t err;
	double item;
	int input_status; /* status value returned by fscanf */
	int count; /* Declare count as integer */
	
	/* Prepare files for input or output */
	err = fopen_s(&inp, "indata.txt", "r");
	err = fopen_s(&outp, "outdata-Task2.txt", "w");
	
	/* Input each item, format it, and write it */
	input_status = fscanf_s(inp, "%lf", &item);
	while (input_status == 1) {
		fprintf(outp, "%.2f\n", item);
		count += item; /* counting formula */
		input_status = fscanf_s(inp, "%lf", &item);
	}
	fprintf(outp, "Total Count in Integer : %i\n", count); /* print at the last */
	
	/* Close the files */
	fclose(inp);
	fclose(outp);
	
	return (0);
}
