#include <stdio.h>
int main()
{
	int b = 0, r = 0, i = 0;
	printf("Guess the number I put forth\n");
	srand(time(NULL));
	r = 1 + rand() % 100;
	do
	{
	    scanf("%d", &b);
	    i = i ++;
	    if (b > r)
		printf("My number is smaller\n");
	    else if (b < r)
		     printf("My number is bigger\n");
		 else
		     printf("Yes! You guessed %d attempts", i);
	} 
	while (b != r);
	getch();
	return 0;
}
