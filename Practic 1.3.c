#include <stdio.h>
int main()
{
	const float pi = 3.14;
	float angle;
	char unit;
	printf("Enter the angle : \n");
	scanf("%f%c", &angle,&unit);
	if (unit == 'D' || unit == 'd')
	{
		printf("%f%D=", angle);
		angle = (angle * pi) / 180;
		printf("%fR", angle);
	}
	else if (unit == 'R' || unit == 'r')
		 {
			 printf("%f%R=", angle);
			 angle = (angle * 180) / pi;
			 printf("%fD", angle);
		 }
		 else
			 printf("Error!");
	getch();
	return 0;
}