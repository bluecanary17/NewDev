#include <stdio.h>

int main()
{
	printf("How many dogs do you have?: ");

	double dogs = 2.5e4;

	scanf("%lf", &dogs);

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);

	/*Conversion Characters
	_______________________

	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides
		< -4
		>  5

	*/

	return 0;
}
