#include<stdio.h>
#include<string.h>

int main(){

FILE *gamesLog;
gamesLog = fopen("games-log.txt","a");
int i, j, k, g, choice,turn;
char player1[50];
char player2[50];
char winner[50];
char box[3];
int isWon = 0;
if(gamesLog == NULL){
	printf("Error: Failed to Open game-logs.\n");
	return 1;
}

	
while(1){
	
	//==== Menu ====//
	printf("1. Start a New Game\n2. Search Game History by Player Name\n");
	printf("3. Show Statistics for the Top Three Players\n4. Exit\n");
	printf("Select: ");
	scanf("%d",&choice);
	
	switch(choice){
	//=== Choice 1 ====//
	
	case 1:{
		printf("Player 1 Name: ");
		scanf("%s",player1);
		printf("Player 2 Name: ");
		scanf("%s",player2);
		
		char grid[4][4][3] = {
    	{ "1",  "2", "3",  "4" },
    	{ "5",  "6",  "7",  "8" },
    	{ "9",  "10", "11", "12" },
    	{ "13", "14", "15", "16" }
		};

		// Game UI
		for(i = 0;i < 4;i++){
			printf("---------------------\n|");
			for(j = 0;j < 4;j++){
				printf("%3s |",grid[i][j]);
				}
			printf("\n");
		}
		printf("---------------------\n\n");
				
		//== Game Logic ==//
		for(g = 0; g < 8; g++){
			turn = g+1;
			printf("******* Turn%d *******\n",turn);
			//== Player 1 ==//
			printf("%s's Turn: ",player1);
			scanf("%2s",box);
					
			for(j = 0;j < 4;j++){
				for(k = 0;k < 4;k++){
					if(strcmp(box,grid[j][k]) == 0)
						strcpy(grid[j][k],"O");
					}
				}
			// Game UI	
			for(j = 0;j < 4;j++){
				printf("---------------------\n|");
				for(k = 0;k < 4;k++){
					printf("%3s |",grid[j][k]);
					}	
				printf("\n");
			}
				printf("---------------------\n");
					
	// Cheaking Winner 
	// Check rows
    for(i = 0; i < 4; i++) {
        if(strcmp(grid[i][0], grid[i][1]) == 0 &&
           strcmp(grid[i][1], grid[i][2]) == 0 &&
           strcmp(grid[i][2], grid[i][3]) == 0 &&
		   strcmp(grid[i][3],"O") == 0){
		   		strcpy(winner,player1);
		   		strupr(player1);
				strupr(player2);
		   		fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
		   		fclose(gamesLog);
           		printf("\n%s is Winner\n",player1);
           		isWon = 1;
           		break;
           }
            
    }
    // Check columns
    for(j = 0; j < 4; j++) {
        if(strcmp(grid[0][j], grid[1][j]) == 0 &&
           strcmp(grid[1][j], grid[2][j]) == 0 &&
           strcmp(grid[2][j], grid[3][j]) == 0 &&
		   strcmp(grid[3][j],"O") == 0){
		   		strcpy(winner,player1);
				strupr(player1);
				strupr(player2);	
				fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);	  
				fclose(gamesLog); 		
           		printf("\n%s is Winner\n",player1);
           		isWon = 1;
            	break;
        }
    }
    
    if(isWon == 1){
    	break;
	}
    
    // Check main diagonal
    if(strcmp(grid[0][0], grid[1][1]) == 0 &&
       strcmp(grid[1][1], grid[2][2]) == 0 &&
       strcmp(grid[2][2], grid[3][3]) == 0 &&
	   strcmp(grid[3][3],"O") == 0){
		   	strcpy(winner,player1);
		   	strupr(player1);
			strupr(player2);
		   	fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
		   	fclose(gamesLog);
	   		printf("\n%s is Winner\n",player1);
        	break;
	   }
       
    
    // Check anti-diagonal
    if(strcmp(grid[0][3], grid[1][2]) == 0 &&
       strcmp(grid[1][2], grid[2][1]) == 0 &&
       strcmp(grid[2][1], grid[3][0]) == 0 &&
	   strcmp(grid[3][0], "O") == 0){
	   		strcpy(winner,player1);
	   		strupr(player1);
			strupr(player2);
	   		fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
	   		fclose(gamesLog);
       		printf("\n%s is Winner\n",player1);
        	break;
    }
   			
		//== Player 2 ==//
		printf("%s's Turn: ",player2);
		scanf("%2s",box);
					
		for(j = 0;j < 4;j++){
			for(k = 0;k < 4;k++){
					if(strcmp(box,grid[j][k]) == 0)
						strcpy(grid[j][k],"X");
				}
		}
		// Game UI	
		for(j = 0;j < 4;j++){
			printf("---------------------\n|");
				for(k = 0;k < 4;k++){
					printf("%3s |",grid[j][k]);
				}
			printf("\n");
		}
		printf("--------------------- \n");
		
	// Checking Winner
	// Check rows
    for(i = 0; i < 4; i++) {
        if(strcmp(grid[i][0], grid[i][1]) == 0 &&
           strcmp(grid[i][1], grid[i][2]) == 0 &&
           strcmp(grid[i][2], grid[i][3]) == 0 &&
		   strcmp(grid[i][3],"X") == 0){
           		strcpy(winner,player2);
           		strupr(player1);
				strupr(player2);
           		fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
           		fclose(gamesLog);
       			printf("\n%s is Winner\n",player2);
       			isWon = 1;
            	break;
        }
    }
    
    // Check columns
    for(j = 0; j < 4; j++) {
        if(strcmp(grid[0][j], grid[1][j]) == 0 &&
           strcmp(grid[1][j], grid[2][j]) == 0 &&
           strcmp(grid[2][j], grid[3][j]) == 0 &&
		   strcmp(grid[3][j],"X") == 0){
           		strcpy(winner,player2);
           		strupr(player1);
				strupr(player2);
           		fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
           		fclose(gamesLog);
       			printf("\n%s is Winner\n",player2);
       			isWon = 1;
            	break;
        }
    }
    
    if(isWon == 1){
    	break;
	}
    
    // Check main diagonal
    if(strcmp(grid[0][0], grid[1][1]) == 0 &&
       strcmp(grid[1][1], grid[2][2]) == 0 &&
       strcmp(grid[2][2], grid[3][3]) == 0 &&
	   strcmp(grid[3][3],"X") == 0){
    		strcpy(winner,player2);
    		strupr(player1);
			strupr(player2);
    		fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
    		fclose(gamesLog);
       		printf("\n%s is Winner\n",player2);
            break;
	}
    // Check anti-diagonal
    if(strcmp(grid[0][3], grid[1][2]) == 0 &&
       strcmp(grid[1][2], grid[2][1]) == 0 &&
       strcmp(grid[2][1], grid[3][0]) == 0 &&
	   strcmp(grid[3][0],"X") == 0){
       		strcpy(winner,player2);
       		strupr(player1);
			strupr(player2);
       		fprintf(gamesLog,"%s,%s,%s,%d",player1,player2,winner,turn);
       		fclose(gamesLog);
       		printf("\n%s is Winner\n",player2);
            break;
		}
		
	}	
			break;
			}
			
	//=====  Choice 2 =====//		
			case 2: 
			break;
			
			
	//=====  Choice 3 =====//			
			case 3:
			break;
			
			
			
			default:
					return 0;
		}
		
	}
	
	return 0;
}
