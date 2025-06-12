#include<stdio.h>
int main(){
	int num=10000;
	char nu='a';
	char *pp=&nu;
	int *p=&num;
	
	printf("This is nu char address, by pointer :%d\n",pp);
	printf("This is n value :%d\n",num);
	printf("This is n address by pointer :%d\n",p);
	printf("This is actual n holding address :%d\n",&num);
	printf("This is pointer holding address :%d\n",&p);
	printf("This is pointer value, assign by n :%d\n",*p);
	return 0;
	
}