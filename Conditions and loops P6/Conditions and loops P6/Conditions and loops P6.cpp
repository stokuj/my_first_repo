
#include <iostream>			

int main()
{
	bool back = 0;
	int N = 7;
	int W = 5;
	int K = 8;

	char x = 'X';
	char z = '.';

	int a = 3;
	int b = 0;

	for (int i = 0; i < N; i++)
	{

		for (int j = a; j < 3; j++)
		{

			std::cout << z;
		}

		for (int k = b; k < 7; k++)
		{

			std::cout << x;
		}

		for (int l = a; l < 3; l++)
		{

			std::cout << z;
		}

		if (back == 0)
		{
			a = a - 1;
			b = b + 2;
		}
		if (back == 1)
		{
			a = a + 1;
			b = b - 2;
		}

		if (b > N - 2)
		{
			back = 1;
		}
		std::cout << std::endl;

	}

}

