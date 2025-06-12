#include<stdio.h>
int main(){
	int arr[3][3]={{1,2,3},
	              {4,5,6},
				  {6,7,8}};
				  for(int i=0;i<3;i++){
				  	for(int i=0;i<3;i++){
				  		printf("%d",arr[i][j]);
					  }
					  printf("\n");
				  }
 return 0;
}