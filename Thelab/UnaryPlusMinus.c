#include <stdio.h>

int main()
{
	int money = 25;
	int bill = 15;

	int total = money - -bill; // 25 - -15 25
	printf("%i\n", total);
	printf("%i\n", bill);
	
	
	return 0;
}
