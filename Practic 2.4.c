#include <stdio.h>
int main()
{
	int r1 = 0, r2 = 0, r3 = 0;
	char string[50];
	srand(time(NULL));
	for (int i = 0; i<40; i++)
	{
	    int rand_c = rand() % 3;
	    switch (rand_c)
	    {
		case 0:
		{
		    r1 = 48 + rand() % 10;
		    string[i] = (char)r1;
		}
		break;
		case 1:
		{
		    r2 = 65 + rand() % 26;
		    string[i] = (char)r2;
		}
		break;
		case 2:
		{
		    r3 = 97 + rand() % 26;
		    string[i]= (char)r3;
		}
		break;
	    }
	}
	printf("String before: %s\nString after:  ", string);
	for (int i = 0; i < 40; i++)
	{
	    if ((string[i] >= (char)65 && string[i] <= (char)90) || (string[i] >= (char)97 && string[i] <= (char)122))
		printf("%c", string[i]);
	}
	for (int i = 0; i < strlen(string); i++)
	{
	    if (string[i] >= (char)48 && string[i] <= (char)57)
		printf("%c", string[i]);
	}
	getch();
	return 0;
}
