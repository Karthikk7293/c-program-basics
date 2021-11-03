/*
 ============================================================================
 Name        : for.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit;
	printf("please enter the limit :\n");
	scanf("%d",&limit);

	  for(i=1;i<=limit;i++){
		  if(i%2==0){
			  for(j=1;j<=limit;j++){
				  if(j==1||i==1||j==limit||i==limit){
					  printf("*");
					  			  }
				  }


		  }
		  printf("\n");
	  }



	return EXIT_SUCCESS;
}
