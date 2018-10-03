/*
 * 9. Rewrite the readLine() function from Chapter 9 so that it uses a
 * character pointer rather than an array.
 *
 * By Faisal Saadatmand
 */

#include <stdio.h>

/* Function to read a line of text from the terminal */
void readLine(char *buffer)
{
	char character;
	
	printf("Enter a line of text, up to 80 characters. Hit enter when done: \n");
			
	do {
		character = getchar();
		*buffer++  = character;
	} while (character != '\n');

	*buffer = '\0';
}

int main(void)
{
	int  i;
	char line[81];

	void readLine(char *buffer);

	for (i = 0; i < 3; ++i) {
		readLine(line);
		printf("%s\n", line);
	}
	return 0;
}
