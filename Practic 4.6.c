#include <stdio.h>
#define MAX 30

int main()
{
    char name[MAX][MAX];
    int age[MAX];
    int *old_age, *young_age;
    char *old_name, *young_name;
    int i = 0, n;
    printf("Enter the number of family members: ");
    scanf("%d", &n);
    printf("Enter are name and age: \n");
    while (i<n)
    {
	scanf("%s%d", &name[i][0], &age[i]);
	++i;
    }
    young_age = &age[0];
    old_age = &age[0];
    young_name = &name[0][0];
    old_name = &name[0][0];
    for (i = 1; i<n; i++)
    {
	if (age[i]<*young_age)
	{
	    young_age = &age[i];
	    young_name = &name[i][0];
	}
	else if (age[i]>*old_age)
	{
	    old_age = &age[i];
	    old_name = &name[i][0];
	}
    }
    printf("\n");
    printf("The youngest: %s, %d\n", young_name, *young_age);
    printf("The oldest: %s, %d", old_name, *old_age);
    getch();
    return 0;
}
