#include <stdio.h>
int main()
{
	int str, p=0, s=0, l=0;
	char c = 0;
	printf("Vvod kol-va strok\n");
	scanf("%d", &str);
	p = str * 2 - 1;
	s = 1;
	l = (p - 1) / 2;
	for (int x = str; x > 0; x--)
	{
	    for (int i = l; i > 0; i--)
		printf(" ");
	    for (int z = s; z > 0; z--)
		printf("*");
	    printf("\n");
	    s = s + 2;
	    l = l - 1;
	}
	getch();
	return 0;
}
