//if else example- we have single condition and single blo;ck of code
#include<stdio.h>
int main(){
	int age;
	printf("Enter the Age :");
	scanf("%d",&age);
	if(age>18){
		printf("You are eligible to vote");
	}
	else{
		printf("You are not eligible to vote");
		
	}
	return 0;
}