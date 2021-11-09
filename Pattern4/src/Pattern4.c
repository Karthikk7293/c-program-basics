/*
 ============================================================================
 Name        : Pattern4.c
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

	for(i=1;i<=limit;i++){
		for(j=0;j<i*2+1; j++){
			for(k=1;k<=i*2;k++){
				if(k==1||j==i||j==i*2+1){
					printf("x ");
				}

			}
			printf("\n");
		}
		//printf("\n");
	}
	return EXIT_SUCCESS;
}
