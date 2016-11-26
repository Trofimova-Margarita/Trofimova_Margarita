#include <stdio.h>
int main()
{
	const float inch_c = 2.54;
	const float foot_c = 12 * inch_c;
	int inch, foot;
	float hight;
	printf("Enter your hight in american system (feet and inches):\n");
	scanf("%d %d", &foot, &inch);
	hight = (foot_c*foot + inch_c*inch);
	printf("Your hight in european system: %fsm", hight);
	getch();
	return 0;
}