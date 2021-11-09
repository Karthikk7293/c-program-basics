/*
 ============================================================================
 Name        : pattern1.c
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
	for(i=1;i<=5; i++){
		for(j=1;j<=i+1;j++){
			for(k=1; k<=i+1; k++){
				if(j==1||k==1)
				printf("X ");
			}
			printf("\n");
		}
//printf("\n");
	}
	return EXIT_SUCCESS;
}
