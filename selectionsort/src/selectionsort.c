/*
 ============================================================================
 Name        : selectionsort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,temp;
	int a[100];
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);

	}
	for(i=0; i<5-1; i++){
		for(j=i+1; j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the values are ");
	for(i=0;i<5; i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
