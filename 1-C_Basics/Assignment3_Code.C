#include "stdio.h"

int main (){
	//C program to Sum 2 matrix.
	printf("C program to Sum 2 matrix.\n");
	int i,j,a[2][2],b[2][2],sum[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Sum of matrix is: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}


	printf("\n\n");
	//C program to Calculate average using arrays.
	printf("C program to Calculate average using arrays.\n");
	int n_1;float avg,tot=0;
	printf("Enter number of elements: ");
	fflush(stdout);
	scanf("%d",&n_1);
	int s[n_1];
	for(i=0;i<n_1;i++){
		printf("Enter element %d: ",i+1);
		fflush(stdout);
		scanf("%d",&s[i]);
		tot+=s[i];
	}
	avg = tot/n_1;
	printf("Average is: %.2f",avg);



	printf("\n\n");
	//C program to find a transpose of matrix.
	printf("C program to find a transpose of matrix.\n");
	int n,m;
	printf("Enter rows & columns of a matrix: ");
	fflush(stdout);			scanf("%d",&n);
	fflush(stdout);			scanf("%d",&m);
	int mat[n][m],trans[m][n];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter matrix%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&mat[i][j]);
			trans[j][i] = mat[i][j];
		}
	}
	printf("The matrix you entered is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("The transpose is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){

			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}


	printf("\n\n");
	//C program to insert an element in an array.
	printf("C program to insert an element in an array.\n");
	int n_2,ins,loc;
	printf("Enter number of elements: ");				fflush(stdout);		scanf("%d",&n_2);
	int array[n_2],n_array[n_2+1];

	for(i=0;i<n_2;i++){
		printf("Enter element %d: ",i+1);				fflush(stdout);		scanf("%d",&array[i]);
	}
	printf("Enter the element to be inserted: ");		fflush(stdout);		scanf("%d",&ins);
	printf("Enter the location: ");						fflush(stdout);		scanf("%d",&loc);
	i=0;j=0;
	while(j<(n_2+1)){
		if(loc==j+1){
			n_array[j]=ins;
			printf("%d\t",n_array[j]);
			j++;
			continue;
		}
		n_array[j]=array[i];
		printf("%d\t",n_array[j]);
		j++;i++;
	}


	printf("\n\n");
	//C program to find an element in an array.
	printf("C program to find an element in an array.\n");


	int n_3,s_e;
	printf("Enter number of elements: ");				fflush(stdout);		scanf("%d",&n_3);
	int array_1[n_3];

	for(i=0;i<n_3;i++){
		printf("Enter element %d: ",i+1);				fflush(stdout);		scanf("%d",&array_1[i]);
	}
	printf("Enter the element to find: ");				fflush(stdout);		scanf("%d",&s_e);
	i=0;
	while(i<n_3){
		if(s_e==array_1[i]){
			printf("Element location is: %d ",i+1);
			break;
		}else i++;
	}


	printf("\n\n");
	//C program to find the frequency of chars in a string.
	printf("C program to find the frequency of chars in a string.\n");
	char str[50],find;
	int freq=0;
	printf("Enter the string: ");
	fflush(stdout);fflush(stdin);
	fgets(str,sizeof(str),stdin);
	printf("Enter the char to find frequency: ");			fflush(stdout); 		scanf("%c",&find);
	i=0;
	while(str[i]!=0){
		if(str[i]==find) freq++;
		i++;
	}
	printf("The frequency of (%c) is: %d",find,freq);


	printf("\n\n");
	//C program to find the length of string without using library function.
	printf("C program to find the length of string without using library function.\n");
	char str_1[50];
	printf("Enter the string: ");
	fflush(stdout);fflush(stdin);
	fgets(str_1,sizeof(str_1),stdin);
	i=0;
	while(str_1[i]!=0)i++;i--;
	printf("Length of string is: %d",i);
	printf("\n\n");
	//C program to reverse a string without using library function.
	printf("C program to reverse a string without using library function.\n");
	char str_2[50],reverse[50];
	printf("Enter the string: ");
	fflush(stdout);fflush(stdin);
	fgets(str_2,sizeof(str_2),stdin);
	i=0;j=0;
	while(str_2[i]!=0)i++;
	while(i!=-1){
		if(str_2[i]==0){
			i--;
			continue;
		};
		reverse[j]=str_2[i];
		i--;j++;
	}
	reverse[j]=0;
	printf("\n");
	printf("The reversed string is: %s",reverse);
	return 0;
}
