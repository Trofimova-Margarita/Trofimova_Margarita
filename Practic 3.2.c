#include <stdio.h>
int main()
{
	char str[120];
	int i = 0, d = 0, a = 0;
	printf("Enter the string:\n");
	gets(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
	    if (str[i] != ' ')
	    {
		printf("%c", str[i]);
		d++;
	    }
	    if (str[i] != ' ' && str[i + 1] == ' ')
	    {
		printf(" (%d)\n", d);
		d = 0;
		a++;
	    }
	    if (str[i] != ' ' && str[i + 1] == '\0')
	    {
		printf(" (%d)\n", d);
		a++;
	    }
	}
	printf("You enter %d words", a);
	getch();
	return 0;
}
