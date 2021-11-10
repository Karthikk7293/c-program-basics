/*
 ============================================================================
 Name        : HollowPyramid.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j ,temp=1,k=2,limit=5;
	for(i=1; i<=limit; i++){

		for(j=1; j<=limit-i; j++){
			printf(" ");
		}
		for(j=1; j<=temp;j++){
		if(j==i*2-1){
			//j==i for centre line of the pyramid
			//j==1 for left side of the pyramid
			//i== limit base line of the pyramid
			printf("%d",i);
		}else if(j==1){
			printf("1");
		}else if(i==limit){
			printf("%d",k++);
		}else{
		printf(" ");
		}
		}
		temp +=2;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
