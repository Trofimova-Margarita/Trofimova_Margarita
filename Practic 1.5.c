#include <stdio.h>
int main()
{
	char str[80];
	int length=120, p = 0;
	printf("Enter the string:\n");
	gets(str);
	p = (length - strlen(str)) / 2;
	system("cls");
	for (int i = 0; i <= p; i++)
	{
		printf(" ");
	}
	printf("%s", str);
	getch();
	return 0;
}