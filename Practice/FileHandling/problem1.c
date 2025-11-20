#include<stdio.h>

int main(){
	
	FILE *file;
	file = fopen("welcome.txt","a");
	
	if(file != NULL){
		
		printf("Open Successfully!\n");
		fprintf(file,"Welcome to File Handling!\n");
		fclose(file);
		
	}else{
		
		printf("Opening File Error!\n");
	}
	
	return 0;
}
