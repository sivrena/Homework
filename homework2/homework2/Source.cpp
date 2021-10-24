#include <iostream>

const int N = 8;

void print(int p[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cout << p[i][j] << "	";
		}
		std::cout << "\n";
	}
}

void magicSpin(int (&p)[N][N])
{
	//starting from 0 layer
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
		{

			//clockwise rotation

			int h = p[i][i];
			int f = p[i][i + 1];

			//top row of layer
			for (int j = 1 + i; j < N - i; j++)
			{
				p[i][j] = h;
				h = f;
				if (j != N - i - 1)
					f = p[i][j + 1];
			}

			//right column of the layer
			h = p[1 + i][N - 1 - i];
			for (int j = 1 + i; j < N - i; j++)
			{
				p[j][N - 1 - i] = f;
				f = h;
				if (j != N - i - 1)
					h = p[j + 1][N - 1 - i];
			}

			//bottom row of layer
			f = p[N - 1 - i][N - 2 - i];
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[N - 1 - i][j] = h;
				h = f;
				if (j != i)
					f = p[N - 1 - i][j - 1];
			}

			//left column of the layer
			h = p[N - 2 - i][i];
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[j][i] = f;
				f = h;
				if (j != i)
					h = p[j - 1][i];

			}
		}

		else
		{

			//counterclockwise rotation

			int h = p[i][N - 1 - i];
			int f = p[i][N - 2 - i];

			//top row of layer
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[i][j] = h;
				h = f;
				if (j != i)
					f = p[i][j - 1];
			}

			//left column of the layer
			h = p[1 + i][i];
			for (int j = 1 + i; j < N - i; j++)
			{
				p[j][i] = f;
				f = h;
				if (j != N - i - 1)
					h = p[j + 1][i];
			}
			
			//bottom row of layer
			f = p[N - 1 - i][i + 1];
			for (int j = 1 + i; j < N - i; j++)
			{
				p[N - 1 - i][j] = h;
				h = f;
				if (j != N - i - 1)
					f = p[N - 1 - i][j + 1];
			}
			
			//right column of the layer
			h = p[N - 2 - i][N - 1 - i];
			for (int j = N - 2 - i; j >= i; j--)
			{
				p[j][N - 1 - i] = f;
				f = h;
				if (j != i)
					h = p[j - 1][N - 1 - i];

			}
		}
	}
}

void magicSort()
{
	//sorting
}

int main()
{

	int count = 1;
	int magicArray[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			magicArray[i][j] = count;
			count++;
		}
	}
	print(magicArray);
	std::cout << "	\n";
	magicSpin(magicArray);
	std::cout << "	\n";
	print(magicArray);
	std::cout << "	\n";

	/*int choice = 0;
	std::cin >> choice;
	switch (choice)
	{
	case (0):
		 magicSpin(magicArray, N);
	case (1):
		void magicSort();

	}*/


	return EXIT_SUCCESS;
}