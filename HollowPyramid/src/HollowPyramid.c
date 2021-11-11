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
		if(j==i*2-1){//j==i*2-1 for final line for line of the pyramid
			printf("%d",i);
		}else if(j==1){//j==1 for left side of the pyramid
			printf("1");
		}else if(i==limit){//i== limit base line of the pyramid
			printf(" %d",k++);
			if(k==limit+1){
				break;
			}
		}else{
		printf(" ");
		}
		}
		temp +=2;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
