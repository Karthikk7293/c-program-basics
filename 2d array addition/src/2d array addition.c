/*
 ============================================================================
 Name        : 2d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10][10],b[10][10],sum[10][10], size=3,i,j;
	printf("please enter the values of the array\n");
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("please enter the values of the array\n");
		for(i=0; i<size; i++){
			for(j=0; j<size; j++){
				scanf("%d",&b[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<size; i++){
					for(j=0; j<size; j++){
						sum[i][j]=a[i][j]+b[i][j];
					}
				}
		for(i=0; i<size; i++){
					for(j=0; j<size; j++){
						printf("%d ",sum[i][j]);
					}
					printf("\n");
				}
	return EXIT_SUCCESS;
}
