#include<stdio.h>
int main(){
	FILE *file;
	file = fopen("welcome.txt","r");
	char line[100];
	if(file != NULL){
		while(fgets(line,100,file) != NULL){
			printf("%s\n",line);
		}
		fclose(file);
	}else{
		printf("Error in Opening!\n");
	}
	
	return 0;
}
