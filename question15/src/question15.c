/*
 ============================================================================
 Name        : question15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int getarray();
//void displayarray();
int main(void) {
	int a;

	a=getarray(array);

	//displayarray();
	return EXIT_SUCCESS;
}
int getarray(){
	int a[10],i;

	printf("please enter the array elements/n");
	for (i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	return a;
}
void dispplarray(int array[]){
	int i;
	printf("the array elements are\n");
	for(i=0; i<5; i++){
		printf("%d",array[i]);
	}

}
