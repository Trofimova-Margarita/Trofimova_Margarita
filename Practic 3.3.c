#include <stdio.h>
#define COUT 2
#define SIZE 120
int main()
{
	char string[SIZE];
	int word[COUT] = { 0,0 }, word_inc = 0;
	scanf("%[^\n]s", &string);
	for (int i = strlen(string); i >= 0; i--)
	{
	    if (isalpha(string[i]))
	    {
		word_inc++;
		if (string[i - 1] == ' ' || string[i - 1] == 0)
		{
		    if (word[1] < word_inc)
		    {
			word[0] = i;
			word[1] = word_inc;
		    }
		    word_inc = 0;
		}
	    }
	}
	for (int i = word[0]; i != word[0] + word[1]; i++)
	{
	    putchar(string[i]);
	}
	printf("\nIts length is %d characters.\n", word[1]);
	getch();
	return 0;
}
