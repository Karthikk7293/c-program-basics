/*
 ============================================================================
 Name        : search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,search=10,flag=0;
	int a[10];
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++){
		if(search==a[i]){
				flag=1;
				break;
			}
	}
	if(flag==1){
		printf("key fount at %d position",i+1);
	}else{
		printf("key not found");
	}

	return EXIT_SUCCESS;
}
