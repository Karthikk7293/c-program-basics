/*
 ============================================================================
 Name        : swap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],b[10],i,temp[10],limit;
	printf("enter the limit \n");
	scanf("%d",&limit);

	printf("enter the first array elements\n");
	for(i=0; i<limit; i++){
		scanf("%d",&a[i]);

	}
	printf("enter the second array elements\n");
	for(i=0; i<limit; i++){
		scanf("%d",&b[i]);
	}
	for(i=0; i<limit; i++){
		temp[i]=a[i];
			a[i]=b[i];
			b[i]=temp[i];
	}

	for(i=0; i<limit; i++){
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=0; i<limit; i++){
			printf("%d",b[i]);
		}

	return EXIT_SUCCESS;
}
