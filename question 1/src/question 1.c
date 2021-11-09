/*
 ============================================================================
 Name        : question.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit=5;

	for(i=1; i<=limit; i++){
		for(j=1; j<=i*2; j++){
			for(k=1; k<=i*2; k++){
/*if(k==j+1)
	printf("_ ");*/
 if(j==i*2||k==1)
printf("x ");


			}

				printf("\n");


		}
		//printf("\n");
	}
	return EXIT_SUCCESS;
}
