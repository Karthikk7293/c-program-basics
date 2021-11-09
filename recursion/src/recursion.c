/*
 ============================================================================
 Name        : recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100]={1,4,4,44,2,3,4,5,8,8,8};
	int i,j,count=0,Count,temp[100];
	int var[100],NewCount[100];
	for(i=0; i<11; i++){
		for(j=0; j<11; j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
var[i]=arr[i];
NewCount[i]=count;
			printf(" %d %d \n",var[i],NewCount[i]);
					count=0;


	}


	/*for(i=0;i<10;i++){
		for(j=1;j<11;j++){
			if(var[i]==var[j]){
				//printf("%d ",var[i]);

			}else{
				//printf("frequency of %d is %d\n",var[i],NewCount[i]);

			}
		}
		//printf("frequency of %d is %d\n",var[i],NewCount[i]);
	}*/
	return EXIT_SUCCESS;
}
