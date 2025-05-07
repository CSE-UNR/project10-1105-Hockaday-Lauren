//Lauren Hockaday
//Project 10


#define WORD_SIZE 5
#define GUESSES 6
#define FILENAME "word.txt"
#include <stdio.h>
#include <stdbool.h>
int fileIO(FILE *filePtr,char array[]); //opening file and checking connection ***WORKS***
int amountLetterCheck(char guessArray[][WORD_SIZE]);//checks guess is 5 letters long
int main(){
FILE *filePtr;
char wordArray[WORD_SIZE];
char guessesArray[GUESSES][WORD_SIZE];
char arrowsArray[GUESSES][WORD_SIZE];
int i, guess_num;
int size;

fileIO(filePtr,wordArray);
//for(i=0; i<WORD_SIZE; i++){
//printf("%c",wordArray[i]);
//}

return 0;
}



int fileIO(FILE *filePtr, char array[]){
filePtr = fopen(FILENAME, "r");
if(filePtr == NULL){
	printf("could not open file\n");
	return 0;
	}
	int i;
for(i=0; i<WORD_SIZE; i++){
	fscanf(filePtr, "%c", &array[i]);
	}
	fclose(filePtr);
}

