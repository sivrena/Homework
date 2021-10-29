#include <iostream>

int main()
{
	int n;
	std::cout << "Enter the length of Array: ";
	std::cin >> n;

	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> p[i];
	}

	int count = 0;
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (i > j && p[i] < p[j])
				count++;
		}
	}

	std::cout << "Number of index pairs (a, b) where a>b and Array[a]<Array[b] is " << count << "\n";

	delete[] p;

	return EXIT_SUCCESS;
}