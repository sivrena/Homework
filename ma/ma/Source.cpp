#include <iostream>

int fib(int f)
{
	int F1 = 1, F2 = 1, temp;
	while (F2 < f)
	{
		temp = F2;
		F2 += F1;
		F1 = temp;
	}
	if (F2 == f)
		return 1;
	else
		return 0;
}

int main()
{

	return EXIT_SUCCESS;
}