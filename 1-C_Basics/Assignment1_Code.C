#include "stdio.h"

int main (){

	printf("Write C Program to Print a Sentence\n");
	printf("C Programming\n");

	printf("\n\n");
	printf("Write C Program to Print a Integer Entered by a User\n");
	int x;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d\n", x);

	printf("\n\n");
	printf("Write C Program to Add Two Integers\n");
	int a,b,sum;
	printf("Enter 2 integers: ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	sum = a+b;
	printf("Sum: %d \n",sum);

	printf("\n\n");
	printf("Write C Program to Multiply two Floating Point Numbers\n");
	float c,d,mul;
	printf("Enter 2 float numbers: ");
	fflush(stdout);
	scanf("%f %f",&c,&d);
	mul = c*d;
	printf("Multiply : %.2f \n",mul);

	printf("\n\n");
	printf("Write C Program to Find ASCII Value of a Character\n");
	char e;
	printf("Enter a character: ");
	fflush(stdout);
	scanf(" %c", &e);
	printf("ASCII value of %c is: %d\n", e,e);

	printf("\n\n");
	printf("Write Source Code to Swap Two Numbers\n");
	int u,v,swap;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&u);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d",&v);
	swap = u;
	u = v;
	v = swap;
	printf("After swapping, value of a: %d\n",u);
	printf("After swapping, value of b: %d\n",v);

	printf("\n\n");
	printf("Write Source Code to Swap Two Numbers without temp variable.\n");
	int n,m;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%d",&m);
	n =	n+m;
	m = n-m;
	n = n-m;
	printf("After swapping, value of a: %d\n",n);
	printf("After swapping, value of b: %d\n",m);


	printf("Thanks for checking it to end :D ");

	return 0;
}
