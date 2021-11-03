/*
 ============================================================================
 Name        : function2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {

	int a,b;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return EXIT_SUCCESS;
}

void sum(num1,num2){
	int sum;
	sum=num1+num2;
	printf("the sum is %d",sum);
}
