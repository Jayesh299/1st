#include<stdio.h>
struct Student{
	int id;
	char name[50];
	float marks;
};

int main(){
	struct Student s1={101,"Jayesh",85.8};
	
	struct Student s2;
	printf("Enter Student ID:");
	scanf("%d",&s2.id);
	printf("Enter Student Name:");
	scanf("%s",s2.name);
	printf("Enter the marks:");
	scanf("%f",&s2.marks);
	
	printf("\nStatic Student Details:\ID %d,Name: %s,Marks:%.2f\n",s1.id,s1.name,s1.marks);
	printf("\nStatic Student Details:\ID %d,Name: %s,Marks:%.2f\n",s2.id,s2.name,s2.marks);
	
	return 0;
}