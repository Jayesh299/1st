#include<stdio.h>
int main(){
	int n=10;
	int *p=&n;
	
	printf("This is n value :%d\n",n);
	printf("This is n address by pointer :%d\n",p);
	printf("This is actual n holding address :%d\n",&n);
	printf("This is pointer holding address :%d\n",&p);
	printf("This is pointer value, assign by n :%d\n",*p);
	return 0;
	
}