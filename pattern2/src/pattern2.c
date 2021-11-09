/*
 ============================================================================
 Name        : pattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n=11;
	int num1 = n / 2 * 3;
	for(i=0;i<n; i++){

		for(j=0; j<n; j++){
			if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1){
				printf("* ");
			}else{
				printf("  ");
			}
		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
