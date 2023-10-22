#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct BagOItems {
	size_t index;
	char character;
	size_t count;	
};

char* substr(char *buffer, int startingPoint, int end){
	char* newString = malloc(strlen(buffer) / 2 );
	if(end < 0)
	{
		strcat(newString, &buffer[startingPoint]);
	}
	else
	{
		for(int i = startingPoint; i <= end; i++)
		{
			newString[i] = buffer[i];
		}
	}	
	return newString;
}

int main(){

	char *buffer;
	size_t bufsize = 64;
	FILE *file = fopen("input", "r");

	while(getline(&buffer, &bufsize, file) && !feof(file)){

		int stringLength  = strlen(buffer);
		int compartmentSize = stringLength / 2;
		int end = -1;	

		char *secondString = malloc(stringLength / 2 + 1);
		secondString = substr(buffer, compartmentSize + 1, end);
		char *firstHalf = malloc(stringLength / 2 + 1);
		firstHalf = substr(buffer, 0, compartmentSize);
		free(firstHalf);
		free(secondString);

	}
	return 0;
}
