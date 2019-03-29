/* Declare an enumerated type month_t and rewrite the following if statement, 
assuming that cur_month is type month_t instead of type int . Also, write the equivalent switch statement. */

#include <stdio.h>

typedef enum {1,2,3,4,5,6,7,8,9,10,11,12} month_t;

int main (void){
	
	if (cur_month == 1)
	     printf("Happy New Year\n");
	else if (cur_month == 6)
	     printf("Summer begins\n");
	else if (cur_month == 9)
	     printf("Back to school\n");
	else if (cur_month == 12)
	     printf("Happy Holidays\n");
}


switch (month_t){
	case 1 : printf("January");
	break;
	
	case 2 : printf("February");
	break;
	
	case 3 : printf("March");
	break;
	
	case 4 : printf("April");
	break;
	
	case 5 : printf("May");
	break;
	
	case 6 : printf("June");
	break;
	
	case 7 : printf("July");
	break;
	
	case 8 : printf("August");
	break;
	
	case 9 : printf("September");
	break;
	
	case 10 : printf("October");
	break;
	
	case 11 : printf("November");
	break;
	
	case 12 : printf("December");
	break;
}
