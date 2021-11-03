/*
 ============================================================================
 Name        : loop5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 *//*/*
 ============================================================================
 Name        : for.c
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

		for(j=i; j<limit; j++){
			printf(" ");
		}
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
