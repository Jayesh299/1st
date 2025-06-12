// if , else is, else nested case - we have multiple condition and multiple block of code with sub conditions
#include<stdio.h>
int main(){
	int age ;
	char gender;
	printf("Enter your age :");
	scanf("%d",&age);
	printf("Enter your gender :");
	scanf(" %c",&gender);
	if(age>18 && age<100){
		if(gender=='m'){
			printf("You can vote");
		}
		else{
			printf("Sorry this is only male voting system");
		}
		
	}
//	else if(age<100){
//		printf("Your age is greater than 100 years");
//	}
	else{
		printf("Invalid age entered !");
	}
	return 0;
}