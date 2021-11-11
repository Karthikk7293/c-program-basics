/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit=6;

	for(i=3;i<=limit;i++){
		for(j=1;j<=i-2;j++){
			printf("%d",i);

		}
		printf("\n");
	}
	for (i=limit-1;i>=3;i--){
			for(j=i-2;j>=1;j--){
				printf("%d",i);


			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
