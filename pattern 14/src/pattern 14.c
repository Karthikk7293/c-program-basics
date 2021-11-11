/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit=7;

	for(i=1;i<=limit;i++){
		for(j=1;j<=i;j++){
			printf("%d",i);
			if(j==i){
				break;
			}else{
				printf("*");
			}

		}
		printf("\n");
	}
	for (i=limit-1;i>=1;i--){
			for(j=i;j>=1;j--){
				printf("%d",i);
				if(j==1){
					break;
				}else{
					printf("*");
				}

			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}
