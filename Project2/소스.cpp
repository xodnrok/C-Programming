#include <stdio.h>
int main(void)
{
	int day_of_week;
	int fee;
	scanf_s("%d",&day_of_week);
	if (day_of_week == 1)
	{
		fee = 5000;
	}
	else if (day_of_week == 6 || day_of_week == 0)
	{
		fee = 10000;
	}
	else
	{
		fee = 8000;
	}
	printf("fee = %d\n", fee);
	return 0;
}