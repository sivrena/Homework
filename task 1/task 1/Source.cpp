#include <iostream>

int isPalindrom(int n)
{
	int count = 0, f = 1;
	int bin[32] = {};

	while (n != 0)
	{
		bin[count] = n % 2;
		n = n / 2;
		count++;
	}

	for (int i = 0; i < count / 2; i++)
	{
		if (bin[i] != bin[count - 1 - i])
			f = 0;
	}
	return f;
}

int main()
{
	int n = 21;
	std::cout << isPalindrom(n);
	return EXIT_SUCCESS;
}