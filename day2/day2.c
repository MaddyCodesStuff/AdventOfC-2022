#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	// Rock X A 1	
	// Paper Y B 2
	// Scissors Z C 3
	FILE *inputFile = fopen("input", "r");
	int score = 0;
	bool eof = false;
	char *input = NULL;
	size_t len = 3;

	while(getline(&input, &len,inputFile) && !feof(inputFile)){
		char opponentInput = input[0];
		char myInput = input[2];
		printf("%s\n",input);
	switch(myInput) {
			case 'X':
				printf("Played rock +1 point\n");
				score += 1;				
				switch(opponentInput) {
					case 'A':
						printf("Draw +3\n");
						score += 3;
						break;
					case 'C':
						printf("Won!, +6\n");
						score += 6;
						break;
				}
			break;
			case 'Y':
				printf("Played Paper!, +2\n");
				score += 2;
				switch(opponentInput){

					case 'A':
						printf("won!, +6\n");
						score += 6;
					break;
					case 'B':
						printf("Draw +3\n");
						score += 3;
					break;
				}
			break;
			case 'Z':
				score += 3;
			printf("Played scissors! +3\n");
				switch(opponentInput){
					case 'B':

						printf("won!, +6\n");
						score += 6;
						break;	
					case 'C':
						printf("Draw +3\n");
						score += 3;
						break;
				}
			break;
		}
		printf("new score: %d\n", score);
	}

	printf("%d\n", score);
}
