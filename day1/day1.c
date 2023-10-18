#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char str[7];
	FILE *input = fopen("input", "r");
	int max = 0;
	int currentElfCalories = 0;
	while (fgets(str, 7, input) != NULL)
	{
		int parsedString  = atoi(str);	
		bool isNull = parsedString == 0;
		if(!isNull)
		{
			currentElfCalories += parsedString;
			continue;
		}
		if( currentElfCalories > max )
		{
			max = currentElfCalories;
		}
		currentElfCalories = 0;
		
	}

	printf("%d\n", max);
	fclose(input);	
	
	return 0;
}

