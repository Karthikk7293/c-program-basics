/*
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
	int i,j ,limit;
	printf("enter a number :\n");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(j=limit;j>=i;j--){
			printf("*");
		}
			printf("\n");
	}
	return EXIT_SUCCESS;
}
