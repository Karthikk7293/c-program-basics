/*
 ============================================================================
 Name        : pyramidpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int temp=1, i, j,limit= 5 ;
for (i=1; i<=limit ; i++){

	for(j=1; j<=limit-i; j++){
		printf("    ");
	}
	for (j=1; j<=temp; j++){
		printf (" *%d ",i);
	}
	temp +=2;
	printf("\n");
}
	return EXIT_SUCCESS;
}
