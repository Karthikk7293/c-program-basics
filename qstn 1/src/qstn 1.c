/*
 ============================================================================
 Name        : qstn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,m,n;
	for(i=1; i<10; i++){

		for(j=1; j<10; j++){
			if(j==1){
				for(k=1; k<2; k++){
					printf("*");
				}
			}

			if(j==5){
				for(m=1; m<=10; m++){
					printf(" ");

				}

			}

			if(j==9){
				for(n=1; n<=1; n++){
					printf("*");
				}

			}
		}
		printf("\n");

	}
	return EXIT_SUCCESS;
}
