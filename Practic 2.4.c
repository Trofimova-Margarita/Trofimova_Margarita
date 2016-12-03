#include <stdio.h>
int main()
{
	const int A=48, B=65, C=97;
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
		    r1 = A + rand() % 10;
		    string[i] = (char)r1;
		}
		break;
		case 1:
		{
		    r2 = B + rand() % 26;
		    string[i] = (char)r2;
		}
		break;
		case 2:
		{
		    r3 = C + rand() % 26;
		    string[i]= (char)r3;
		}
		break;
	    }
	}
	printf("String before: %s\nString after:  ", string);
	for (int i = 0; i < 40; i++)
	{
	    if ((string[i] >= (char)B && string[i] <= (char)90) || (string[i] >= (char)C && string[i] <= (char)122))
		printf("%c", string[i]);
	}
	for (int i = 0; i < 40; i++)
	{
	    if (string[i] >= (char)A && string[i] <= (char)57)
		printf("%c", string[i]);
	}
	getch();
	return 0;
}
