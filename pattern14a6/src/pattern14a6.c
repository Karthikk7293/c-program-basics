/*
 ============================================================================
 Name        : pattern14a6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j,k=1 ,m=2 ,limit=8;
	for(i=limit;i>=1; i--){
		for(j=i; j>=1; j--){
			//printf("%d",j);
			//k++;
			if(j==1){
				printf(" %d ",limit);
			}else if(i==limit){
				printf(" %d ",k);
				k++;
			}else if(i==j){
				printf(" %d ",m);
				m++;
			}else{
				printf("   ");
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
