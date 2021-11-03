/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j;
	int a[10][10];

	for(i=0; i<2; i++){
		for(j=0; j<4; j++){
			scanf("%d", &a[i][j]);
		}

	}
	for(i=0; i<2; i++){
			for(j=0; j<4; j++){
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}
