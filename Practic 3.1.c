#include <stdio.h>
int main()
{
	char str[120];
	int d = 0;
	printf("Enter the string:\n");
	gets(str);
	for (int i = 1; str[i]!='\0'; i++)
	    if (str[i]== ' ')
	        d++;
	printf("You entered %d words", d + 1);
	getch();
	return 0;
}
