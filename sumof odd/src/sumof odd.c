/*
 ============================================================================
 Name        : sumof.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,sum=0,limit;
	printf("please enter the limit \n");
	scanf("%d",&limit);
	printf("the out of all odd number in the limit: ");
	for(i=1; i<=limit; i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return EXIT_SUCCESS;
}
