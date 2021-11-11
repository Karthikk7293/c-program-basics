/*
 ============================================================================
 Name        : question15(7).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j,limit=7;
	for(i=1;i<=limit;i++){
		for(j=1;j<=limit;j++){
			if(j==1||j==limit||i==j||i+j==limit+1){
				printf(" x ");
			}else if(i==j+1&&j<=limit/2){
				printf(" x ");
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
