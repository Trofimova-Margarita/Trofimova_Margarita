#include <stdio.h>
#include <stdbool.h>
#define SIZE_STR 80
#define MAX_STR 100

void sort(char **p, int size);
int main()
{
	char str[MAX_STR][SIZE_STR];
	int s_count = -1;
	char *pointers[MAX_STR];
	int psize = 0;
	printf("Enter you strings:\n");
	do
	{
		s_count++;
		gets(str[s_count]);
		pointers[psize] = &str[s_count][0];
		psize++;
	}
	while (strlen(str[s_count]) != 0);
	sort(pointers, psize);
	printf("Strings in new sequence (increase):\n");
	for (int i = 1; i < psize; i++)
		printf("String %d: %s\n", i, pointers[i]);
	getch();
}

void sort(char **p, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool swap = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (strlen(p[j])>strlen(p[j + 1]))
			{
				char *a;
				a = p[j];
				p[j] = p[j + 1];
				p[j + 1] = a;
				swap = true;
			}
		}
		if (!swap)
			break;
	}
}
