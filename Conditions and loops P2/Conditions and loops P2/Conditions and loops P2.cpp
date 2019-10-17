

#include <iostream>



int main()
{
	int N = 0;
	int W = 5;
	int K = 8;

	char x = 'X';

	for (int i = 0; i < W; i++)
	{
		




		for (int j = 0; j < K; j++)
		{

			std::cout << x;
			if (x == 'X')
			{

				x = '.';
			}
			else
			{
				x = 'X';
			}
		}

		std::cout << std::endl;


	}

 
}

