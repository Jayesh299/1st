#include<stdio.h>
#include<string.h>
union Data{
	int id;
	char name[50];
};
int main(){
	union Data student;
	
	student.id=101;
	printf("Student ID:%d\n",student.id);
	
	strcpy(student.name,"Jayesh");
	printf("Student Name:%s\n",student.name);
	return 0;
}