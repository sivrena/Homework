#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		setlocale(LC_ALL, "Russian");
		int p, h = 0;
		std::cout << "���������� �������: " << "\n";
		std::cin >> p;
		for (int j = p - 1; j >= 1; j--)
			h += j;
		std::cout << "����� �����������: " << h << "\n";
	}
	return EXIT_SUCCESS;
}