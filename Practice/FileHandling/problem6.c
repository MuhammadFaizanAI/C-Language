#include<stdio.h>
#include<stdlib.h>

int main(){
	int marks;
	char name[50];
	char rollno[7];
	
	printf("--------Student Data--------\n");
	
	// Input with full validation
	printf("Name: ");
	if(scanf("%49[^\n]",name) != 1){
		printf("Error: Invalid name input\n");
		return 1;
	}
	
	// Clear input buffer
	int c;
	while((c = getchar()) != '\n' && c != EOF);
	
	// Input roll number
	printf("Roll #: ");
	if(scanf("%6[^\n]",rollno) != 1){
		printf("Error: Invalid roll # input\n");
		return 1;
	}
	
	// Clear input buffer
	while((c = getchar()) != '\n' && c != EOF);
	
	// Input Marks
	printf("Marks: ");
	if(scanf("%d",&marks) != 1){
		printf("Error: Invalid marks input\n");
		return 1;
	}
	
	// File Operations
	FILE *file;
	file = fopen("student_record.txt","w");
	
	if(file == NULL){
		printf("Error: Cannot create file\n");
		return 1;
	}
	
		fprintf(file,"%s,%s,%d\n",name,rollno,marks);
		fclose(file);
	
	
	return 0;
}
