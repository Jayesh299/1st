#include<stdio.h>
int main(){
	int arr[2][2];
	int sum=0;
	printf("Enter the element:");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		
			scanf("%d",&arr[i][j]);
	}
	}
			
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		sum=sum+arr[i][j];	
}
}
//		printf("The sum is:%d",sum);
//for(int i=0;i<2;i++){
//		for(int j=0;j<2;j++){
//printf("\n");
//		
//printf("%d",arr[i][j]);
//	}
//	printf("\n");
//	}
printf("The sum is:%d",sum);
return 0;
}