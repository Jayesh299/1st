#include<stdio.h>
int main(){
	int age;
printf("Entere the age");
scanf("%d",&age);
if(age>18 && age<60){
	printf("You are eligible to vote");
}
else if(age>60 && age<100){
	printf("You are senior citizen");
}
else if(age>100){
	printf("You are not eligible to vote");
}
else{
	printf("You are not eligible to vote");
}
return 0;
}