#include<stdio.h>
int main(){
int num1;
float num2;
double num3;
char num4;
char name[10];

printf("Enter the num1:");
scanf("%d",&num1);
printf("This is num1:%d\n",num1);

printf("Enter the num2:");
scanf("%f",&num2);
printf("This is num2:%f\n",num2);

printf("Enter the num3:");
scanf("%lf",&num3);
printf("This is num3:%lf\n",num3);

printf("Enter the num4:");
scanf(" %c",&num4);
printf("This is num4:%c\n",num4);

printf("Enter the name:");
scanf("%s",&name);
printf("This is name:%s\n",name);
	
	return 0;
}