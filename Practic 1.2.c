#include <stdio.h>
int main()
{
	int hour, minute, second;
	printf("Enter the time in the format HH:MM:SS\n");
	printf("HH:");
	scanf("%d", &hour);
	printf("MM:");
	scanf("%d", &minute);
	printf("SS:");
	scanf("%d", &second);
	printf("Current time: %d:%d:%d\n", hour, minute, second);
	if (hour >= 17 && hour < 23)
		printf("Good evening!");
	else if (hour >= 4 && hour < 12)
		printf("Good morning!");
		 else if (hour >= 12 && hour < 17)
		printf("Good afternoon!");
			  else
				  printf("Good night!");
	getch();
	return 0;
}