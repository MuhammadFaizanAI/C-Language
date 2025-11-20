#include<stdio.h>

int main(){
	FILE *file;
	file = fopen("welcome.txt","r");
	char line[100];
	int ctr = 0;
	
	if(file != NULL){
		
		while(fgets(line,sizeof(line),file) != NULL){
			ctr++;
		}
		printf("No of Lines: %d\n",ctr);
		fclose(file);
	}else{
		printf("Opening File Error!\n");
	}
	
	return 0;
}
