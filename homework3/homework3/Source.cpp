#include <iostream>
#include <ctime>

void fill(int** p, int n, int m)
{
	srand(time(0));
	for (int i=0; i<n; i++)
		for (int j = 0; j < m; j++)
		{
			p[i][j] = 10 + rand() % 41;
		}
}

void print(int** p, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << p[i][j] << "	";
		}
		std::cout << "\n";
	}
}

int main()
{
	int n = 0, m = 0;
	std::cout << "Enter the number of rows and columns: ";
	std::cin >> n >> m;
	int** array = new int*[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[m];
	}

	fill(array, n, m);
	
	print(array, n, m);

	for (int i = 0; i < n; i++)
	{
		delete[] array[i];
	}
	delete[] array;
	

	return EXIT_SUCCESS;
}