#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		int r, t, count = 0;
		double x, y;
		std::cout << "Circle radius: ";
		std::cin >> r;
		std::cout << "Number of points: ";
		std::cin >> t;
		srand(time(NULL));
		for (int j = 0; j < t; j++)
		{
			x = rand() * 0.01;
			y = rand() * 0.01;
			std::cout << "(" << x << ", " << y << ")" << "\n";
			if (x * x + y * y <= r * r)
				count++;
		}
		std::cout << "Number of points in a circle: " << count << "\n";
	}
	return EXIT_SUCCESS;
}