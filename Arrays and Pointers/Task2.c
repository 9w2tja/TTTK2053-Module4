/* Define a function multiply that computes and returns the product of the type int elements of its array input argument.
The function should have a second input argument telling the number of array elements to use. */

#include <stdio.h>
int multiply(int array[], int n) 
{ 
    int pro = 1, i; 
    for (i = 0; i < n; i++)  
        pro = pro * array[i]; 
    return pro; 
} 

int main() 
{ 
    int array[] = {1, 2, 3, 4, 5, 6}; 
    int n = sizeof(array) / sizeof(array[0]); 
      
    // Function call to calculate product
    printf("%i", multiply(array, n));
    return 0; 
} 
