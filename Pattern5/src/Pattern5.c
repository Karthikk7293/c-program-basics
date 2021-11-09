/*
 ============================================================================
 Name        : Pattern5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k,limit=5;
	for(k=1; k<5; k++){
		for(i=1; i<=k*2+1;i++){
				for(j=1; j<=k*2;j++){
					if(j==1||i==k+2){
						printf("x ");
					}else{
						printf(" ");
					}
				}
				printf("\n");
			}
		//printf("\n");
	}

	return EXIT_SUCCESS;
}
