#include<stdio.h>

int main(){
	FILE *file;
	FILE *filecpy;
	file = fopen("welcome.txt","r");
	filecpy = fopen("welcomecpy.txt","w");
	
	char line[100];
	if(file != NULL && filecpy != NULL){
		
		while(fgets(line,sizeof(line),file) != NULL){
			fputs(line,filecpy);
		}
		fclose(file);
		fclose(filecpy);
	}
	
	return 0;
}
