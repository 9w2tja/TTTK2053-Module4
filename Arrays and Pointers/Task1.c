/* Task 1 :  Function to Add Two Arrays */

/*
Adds corresponding elements of arrays ar1 and ar2, storing the result in arsum. Processes first n elements only.
Pre: First n elements of ar1 and ar2 are defined. arsum’s corresponding actual argument has a declared size >= n (n >= 0)
*/

#include <stdio.h>

void add_arrays(
	const double ar1[], /* input - */
	const double ar2[], /* arrays being added */
	double arsum[], /* output - sum of corresponding elements of ar1 and ar2 */
	int n) /* input - number of element pairs summed */
{
	int i;
	
	/* Adds corresponding elements of ar1 and ar2 */
	for (i = 0; i < n; ++i)
		arsum[i] = ar1[i] + ar2[i];
}

int main (void){
	double c[] = {11,12,13,14,15,16};
	double d[] = {21,22,23,24,25,26};
	double e[] = {31,32,33,34,35,36};
	
//	int n;
//	int arr_sum = add_arrays (ar1,n);
	add_arrays(c[6], d[6], e[6], 6);
	
	return 0;
}

/*
Assume a main function contains declarations for three type double arrays— c , d , and e , each with six elements.
Also, assume that values have been stored in all array elements. Explain the effect of each valid call to add_arrays .
Explain why each invalid call is invalid.

a. add_arrays(ar1, ar2, c, 6);
b. add_arrays(c[6], d[6], e[6], 6);
c. add_arrays(c, d, e, 6);
d. add_arrays(c, d, e, 7);
e. add_arrays(c, d, e, 5);
f. add_arrays(c, d, 6, 3);
g. add_arrays(e, d, c, 6);
h. add_arrays(c, c, c, 6);
i. add_arrays(c, d, e, c[1]); (if c[1] is 4.3 ? if c[1] is 91.7 ?)
j. add_arrays(&c[2], &d[2], &e[2], 4);
*/
