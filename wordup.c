//Lauren Hockaday
//Project 10


#define WORD_SIZE 5
#define GUESSES 6
#define FILENAME "word.txt"
#include <stdio.h>
#include <stdbool.h>
int fileIO(FILE *filePtr,char array[]); //opening file and checking connection ***WORKS***
int amountLetterCheck(char guessArray[][WORD_SIZE]);//checks guess is 5 letters long
//void lowercaseCheck(char guessArray[][WORD_SIZE]);//return 1 if word is already lowercase
//void guessEqWord(char guessArray[][WORD_SIZE],char wordArray[]);// check for wining
//void compareGuessToWord1();//check for letters in correct places
//void compareGuessToWord2(); //check for letters in word but wrong place
//int winOrLose(); //check if the final guess is the same as the word, return 1 or 0
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

for(i=0; i<=GUESSES; i++){
	printf("GUESS %d! Enter your guess: ", i+1);
	scanf("%s", guessesArray[i]);	
	size = amountLetterCheck(guessesArray);
		if(size != WORD_SIZE){
		printf("Guesses must be 5 letters long.\n Please try again: ");
			scanf("%s", guessesArray[i]);
		}
}
		
		
		
		//lowercaseCheck(guessesArray);
		//printf("%s\n", guessesArray);
		//guessEqWord(guessesArray,wordArray);
		




//while loop?
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


int amountLetterCheck(char guessArray[][]){//turn to bool and true/false?
int i;
for(i=0; i<WORD_SIZE; i++){
while(guessArray[GUESSES][i]) == 1){
	return i;
		}
	}
}

void lowercaseCheck(char guessArray[][WORD_SIZE]){
for(int i=0; i<= GUESSES; i++){
	for(int j=0; j<= WORD_SIZE; j++){
		if(guessArray[i][j] >='A' && guessArray[i][j] <= 'Z'){
			guessArray[i][j] == guessArray[i][j] +32;
			}
		}	
	}
}

void guessEqWord(int guess,char guessArray[][WORD_SIZE],char wordArray[]){
int i,j;
for(int i=0; i<= GUESSES; i++){
	for(int j=0; j<= WORD_SIZE; j++){
		if(guessArray[guess][j] == wordArray[j]){
		printf("        %s\n", wordArray);
		printf("You won in %d guesses!\n", i);
		printf("        Nice!\n");
			
			}
		}	
	}
}

//void compareGuessToWord1(char guessArray[][WORD_SIZE],char wordArray[]){

//}

































































