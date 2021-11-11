/*
 ============================================================================
 Name        : pattern15a3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit=5;
	for(i=1;i<=limit; i++){
		for(j=1; j<=i; j++){
			if(j==1){
				printf(" 1 ");
			}else if(j==i){
				printf(" %d ",i);
			}else if(i==limit){
				printf(" %d ",j);
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
