#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		setlocale(LC_ALL, "Russian");
		int p, h = 0;
		std::cout << "Количество человек: " << "\n";
		std::cin >> p;
		for (int j = p - 1; j >= 1; j--)
			h += j;
		std::cout << "Число рукопожатий: " << h << "\n";
	}
	return EXIT_SUCCESS;
}