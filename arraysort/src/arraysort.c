/*
 ============================================================================
 Name        : arraysort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],i,j,limit,temp[10];
	printf("please enter the limit\n");
	scanf("%d",&limit);
	printf("please enter the array values\n");
	for(i=0; i<limit; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<limit-1; i++){
		for(j=i+1; j<limit; j++){
			if(a[i]<a[j]){

				temp[i]=a[i];
							a[i]=a[j];
							a[j]=temp[i];
			}
		}
	}
	for(i=0; i<limit; i++){
		printf("%d ",temp[i]);
	}
	return EXIT_SUCCESS;
}
