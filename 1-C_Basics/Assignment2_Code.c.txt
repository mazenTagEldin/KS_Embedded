#include "stdio.h"

int main (){
	printf("Write C program to check whether a number is Even or Odd\n");
	int x;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2) printf("%d is odd",x);
	else printf("%d is even",x);

	printf("\n\n");
	printf("Write C program to check whether an alphabet is Vowel or Consonant\n");
	char y;
	int vowel_on=0,i;
	char vowel[] = "aeiouAEIOU";
	printf("Enter an alphabet you want to check: ");
	fflush(stdout);
	scanf(" %c",&y);
	for (i=0;i<10;i++){
		if (vowel[i] == y) vowel_on++;
	}
	if(vowel_on) printf("%c is Vowel",y);
	else printf("%c is Consonant",y);

	printf("\n\n");
	printf("Write C Program to check if a number is Positive or Negative\n");
	int z;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&z);
	if(z>0) printf("%d is Positive",z);
	else printf("%d is Negative",z);

	printf("\n\n");
	printf("Write C Program to check if a char. is alphabet or not\n");
	char k;
	printf("Enter a char. you want to check: ");
	fflush(stdout);
	scanf(" %c",&k);
	if(k>64 && k<123) printf("%c is an alphabet",k);
	else printf("%c isn't an alphabet",k);


	printf("\n\n");
	printf("Write C Program to find the largest among 3 numbers\n");
	int a,b,c;
	printf("Enter integers separated by space: ");
	fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c) printf("%d is The Largest",a);
	else if(b>c) printf("%d is The Largest",b);
	else 		 printf("%d is The Largest",c);




	printf("\n\n");
	printf("Write C Program to calculate the sum of natural numbers.");
	int num, sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	while(num){
		sum+=num;
		num--;
	}
	printf("Output is %d",sum);

	printf("\n\n");
	printf("Write C Program to find the factorial of a number.");
	int u, fac=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&u);
	while(u){
		fac*=u;
		u--;
	}
	printf("Output is %d",fac);

	printf("\n\nThanks for checking it to end :D ");

	return 0;
}
