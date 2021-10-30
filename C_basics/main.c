/*
 * main.c
 *
 *  Created on: Oct 30, 2021
 *      Author: temp
 */


#include "stdio.h"
void main (){
	int i = 0;
	int j = 9;
	for (i=0;i<10;i++){
		for(j=9;j>i;j--){
			printf ("%d ",j);
		}
		printf("\n");
	}
}
