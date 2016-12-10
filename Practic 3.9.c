#include <stdio.h>
int main()
{
	char str[20];
	printf("Enter the string\n");
	gets(str);
	int a = 1, b = 0, c = 0;
	for (int i = 0; i < strlen(str) - 1; i++)
	{
	    if (str[i] == str[i + 1])
		a = a + 1;
	    else if ((a != 1) && (b < a))
	    {
		b = a;
		c = i;
		a = 1;
	    }
	}
	printf("Length: %d\n", b);
	printf("The longest string: ");
	for (int x = (c - b)+1; x <= c; x++)
	    printf("%c", str[x]);
	getch();
	return 0;
}
