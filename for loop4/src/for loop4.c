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
	int i,j,k;
	printf("please enter the number :\n");
	scanf("%d",&k);
	for(i=0;i<32;i++){
		for(j=0;j<=k;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
