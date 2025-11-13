# include <stdio.h>
#include <string.h>

int main(){
	char Word[4][10]= { "Apple","Grapes","Banana","oranges"};
	
	for(int i =0;i<4;i++){
		printf("Word: %s  Length: %d\n",Word[i],strlen(Word[i]));
	}
	printf("Enter Favourite Food: ");
	fgets(Word[1],10,stdin);
	Word[1][strcspn(Word[1],"\n")] = '\0';
	for(int i =0;i<4;i++){
		printf("Word: %s  Length: %d\n",Word[i],strlen(Word[i]));
	}
	for(int i =0;i<4;i++){
		char word[10];
		strcpy(word,Word[i]);
		printf("%s\n",word);
		printf("\n");
		for(int j = 0; j<strlen(word);j++){
			printf("%c\n",word[j]);
		}
		printf("\n");
	}
}