/*
 ============================================================================
 Name        : first.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	for(i=1; i<=10; i++){
		for(j=1; j<=10;j=j*2){
			if(j==1){
				printf("* ");

					}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
