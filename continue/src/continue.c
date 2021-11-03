/*
 ============================================================================
 Name        : continue.c
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
	for(i=1; i<10; i++){
		for(j=1; j<=10; j++){

			if(i%2==0 && j==i+1){
				printf("* ");

			}else if(i==i+1 && j==i+3){
				printf("* ");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
