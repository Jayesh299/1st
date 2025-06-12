#include<stdio.h>
int main(){
	int n;
	int n1;
	 
	 printf("Enter the first no. :");
	 scanf("%d",&n);
	 
	 printf("Enter the Second no. :");
	 scanf("%d",&n1);
	 
	 int sum= n+n1;
	 printf("The sum of %d and %d is %d\n",n,n1,sum);
	 
	  int sub= n-n1;
	 printf("The sub of %d and %d is %d\n",n,n1,sub);
	 
	  int multipliction= n*n1;
	 printf("The multipliction of %d and %d is %d\n",n,n1,multipliction);
	 
	  int division= n/n1;
	 printf("The division of %d and %d is %d\n",n,n1,division);
	 
	  int modulus= n%n1;
	 printf("The modulus of %d and %d is %d\n",n,n1,modulus);
	 
	 return 0;
}