/*
 ============================================================================
 Name        : function4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	printf("the result is%d\n",sum());

	return EXIT_SUCCESS;
}
int sum(){
	int a,b,sum;
	printf("please enter two values\n");
	scanf("%d%d",&a,&b);
	return sum=a+b;
}
