/*
 ============================================================================
 Name        : Pattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit=3;
	for(i=1;i<limit;i++){
		for(j=1;j<i*2+2; j++){
			for(k=1; k<=i*3; k++){
				if(k==1||j==1){
					printf("x ");
				}
			}
			printf("\n");
		}
	}
	return EXIT_SUCCESS;
}
