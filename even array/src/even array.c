/*
 ============================================================================
 Name        : even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],i,limit,flag=0,oddcount=0;
	printf("please enter the limit \n");
	scanf("%d",&limit);
	printf("please enter the values of the array");
	for(i=0; i<limit; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<limit; i++){
		if(a[i]%2!=0){
			oddcount++;
			//printf("%d ",oddcount);
		}else{
			flag=1;

		}
	}
	printf("%d ",oddcount);
	if(flag==1){
		printf("odd number not found\n");

	}
	return EXIT_SUCCESS;
}
