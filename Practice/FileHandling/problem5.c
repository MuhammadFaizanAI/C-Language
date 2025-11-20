#include<stdio.h>

int main(){
	
	FILE *file;
	file = fopen("welcome.txt","r");
	int ctr = 0;
	
	if(file != NULL){
		
		while(fgetc(file) != EOF){
			ctr++;
		}
		printf("Character Frequency: %d\n",ctr);
		fclose(file);
		
	}
	else{
		
		printf("Failed to Open File\n");
		
	}
	
	return 0;
}
