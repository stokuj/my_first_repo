
#include <iostream>

int main()
{
	int N = 10;

//    std::cout << "Enter N: ";
//    std::cin >> N ;

	char x = 'X';
	char z = '.';

	int num_x = 5;
	int num_z = 4;

	for (int i = 0; i < N; i++)
	{


	    for (int l = 0; l < N;)
        {


            for ( int j = 0; j < num_x; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << x;
                l++;
            }


            for ( int k = 0; k < num_z; k++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout <<z;
                l++;
            }



        }


		std::cout << std::endl;

	}

}

