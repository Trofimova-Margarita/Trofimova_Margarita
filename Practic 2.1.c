#include <stdio.h>
#include <math.h>
int main()
{
	const float g = 9.81;
	float h, l = 0;
	printf("Enter the height: ");
	scanf("%f", &h);
	for (int t = 0; h>0; t++)
	{
	    l = (g*pow(t, 2)) / 2;
	    h = h - l;
	    if (h > 0)
		printf("t=%.2dc \t h=%fm\n",t,h);
	}
	printf("BABAH!!!");
	getch();
	return 0;
}
