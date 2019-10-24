

#include <iostream>



int main()
{
	int W;
	int K;

    std::cout << "Enter W and K.\n";
    std::cin >> W >> K;

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

