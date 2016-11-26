#include <stdio.h>
int main()
{
	char gender;
	float weight, height;
	double p = 0;
	printf("Enter your gender (f/m):");
	scanf("%c", &gender);
	printf("Enter your weight (kg):");
	scanf("%f", &weight);
	printf("Enter your height (sm):");
	scanf("%f", &height);
	if (gender == 'm')
		p = (height - 100)*0.9;
	else if (gender == 'f')
		p = (height - 100)*0.85;
	else
		printf("Error!");
	if (weight == p)
		printf("Your weight is normal");
	else if (weight > p)
		printf("You need to lose weight");
	else
		printf("You need to get fat");
	getch();
	return 0;
}