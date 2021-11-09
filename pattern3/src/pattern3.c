/*
 ============================================================================
 Name        : pattern3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, N;

	    printf("Enter N: ");
	    scanf("%d", &N);

	    for(i=1; i<=N; i++)
	    {
	        for(j=1; j<=i; j++)
	        {
	            printf("%d", i);
	        }

	        printf("\n");
	    }

	return EXIT_SUCCESS;
}
