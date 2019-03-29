/* Write a program that takes a word less than 25 characters long and prints a statement like this:
fractal starts with the letter f. Have the program process words until it encounters a “word” beginning with the character '9' */

#include <stdio.h>

int main(void){
	int i;
	char word [25] = "fractal";
	printf("%s starts with the letter %c\n", word, word[0]);
	
	printf("Word starts with the letter #9 : ");
	for (i=9-1; i<25; i++){
		printf("%c", word[i]);
	}
	printf("\n");
	return 0;
}
