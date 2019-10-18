#include <iostream>



int main()
{
	int N = 6;
	int W = 5;
	int K = 8;

	char x = 'X';
	char z = '.';

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N / 2; j++)
		{

			std::cout << x;
		}

		for (int j = 0; j < N / 2; j++)
		{

			std::cout << z;
		}
		
		if (i+1== N)
		{
			if (x == 'X')
			{

				x = '.';
				z = 'X';
			}
			else
			{
				z = '.';
				x = 'X';
			}
		}

		std::cout << std::endl;
	}


}