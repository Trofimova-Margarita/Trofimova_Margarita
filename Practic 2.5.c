#include <stdio.h>
int main()
{
	const int A = 48, B = 65, C = 97;
	int r1 = 0, r2 = 0, r3 = 0, a=0, b=0, d=0;
	char string[20];
	srand(time(NULL));
	for (int c = 1; c < 11; c++)
	{
	    for (int i = 0; i < 8; i++)
	    {
	    int rand_c = rand() % 3;
	  switch (rand_c)
		{
		    case 0:
		{
					r1 = A + rand() % 10;
					string[i] = (char)r1;
					a++;
				}
				break;
				case 1:
				{
					r2 = B + rand() % 26;
					string[i] = (char)r2;
					b++;
				}
				break;
				case 2:
				{
					r3 = C + rand() % 26;
					string[i] = (char)r3;
					d++;
				}
				break;
				}
			}
			if (a > 0 && b > 0 && d > 0)
				printf("Password %d:	%s\n", c, string);
			else
				c--;
			a = 0; 
			b = 0,
			d = 0;
	}
	getch();
	return 0;
}
