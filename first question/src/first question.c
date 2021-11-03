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
	int i,j,k,m;
	for(i=1; i<10; i++){
		if(i==1){
			for(j=1; j<3; j++){
				printf("* ");
			}
		}else if(i==5){
			for(k=1; k<5; k++){
				printf("* ");
			}
		}else if(i==9){
			for(m=1; m<7; m++){
				printf("* ");
			}
		}else{
			printf("* ");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
