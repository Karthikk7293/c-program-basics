/*
 ============================================================================
 Name        : Array18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100];
	int i,j,sum=0,limit=10;

	printf("Please enter array elements\n");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0; i<limit; i++){
		if(arr[i]%2==0){
			sum=sum+arr[i];
		}
	}
	printf("The Array values are \n");
	for(i=0; i<limit; i++){
		printf("%d ",arr[i]);
	}
	printf("\n%d",sum);
	return EXIT_SUCCESS;
}









