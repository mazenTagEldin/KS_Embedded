#include "stdio.h"
#include "string.h"

int i,j,count;
void primeNumbers( short start , short end ){
	int x;
	int p_flag=1;
	j=0;
	for(x=start;x<=end;x++){
		for(i=2;i<=(x/2);i++){
			if(x%i==0){
				p_flag = 0;
				break;
			}
		}
		if(p_flag == 1) printf("%d ",x);
		p_flag = 1;
	}
}
int fact=1,print_once=0;
void factorial(int num){
	fact *= num ;
	num--;
	if (num) factorial(num);
	if (!print_once){
	printf("Factorial is: %d",fact);
	print_once=1;
	}
}

int iter = 0;
void reverse (char  str[]){
	if (!iter) {
		iter = strlen(str)-1;
		printf("%c",str[iter]);
	}
	printf("%c",str[--iter]);
	if (iter) reverse (str);
}
int res=1,p_once=0;
void power (int num, int pow){
	res *= num;
	pow--;
	if (pow) power(num, pow);
	if (!p_once){
	printf("Result is: %d",res);
	p_once=1;
	}
}


int main (){
	//FUNCTIONS
	primeNumbers(10,50);
	printf("\n");
	factorial(5);
	printf("\n");
	reverse("mazen tarek");
	printf("\n");
	power(2,5);
	return 0;
}

