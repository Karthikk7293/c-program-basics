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
	int i,j,k,count=0,Count,number=11,temp[100];
	int var[100],NewCount[100];
	for(i=0; i<11; i++){
		for(j=0; j<11; j++){
			if(arr[i]==arr[j]){
				count++;
			}

		}
var[i]=arr[i];
NewCount[i]=count;
			//printf(" frequency of %d  is %d \n",var[i],NewCount[i]);
					count=0;


	}
	for(i=0;i<number;i++){
	   for(j = i+1; j < number; j++){
	      if(var[i] == var[j]){
	         for(k = j; k <number; k++){
	            var[k] = var[k+1];
	         }
	         j--;
	         number--;
	      }
	   }
	}
	for(i=0;i<number;i++){
	   printf("%d ",var[i]);
	}
	printf("\n");
	for(i=0;i<number;i++){
		   for(j = i+1; j < number; j++){
		      if(NewCount[i] == NewCount[j]){
		         for(k = j; k <number; k++){
		            NewCount[k] = NewCount[k+1];
		         }
		         j--;
		         number--;
		      }
		   }
		}
		for(i=0;i<number;i++){
		   printf("%d ",NewCount[i]);
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
