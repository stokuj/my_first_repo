
#include <iostream>

int main()
{
    std::cout << "Enter N: ";
    int N;
    std::cin >> N ;

	char x = 'X';
	char z = '.';

    int num_0 = 0;
	int num_1 = N/2; //  n/2
	int num_2 = (N/2)-1; // (n/2)-1
	int num_3 = (N/2) - ((N/2)-1); // (n/2) - ((n/2)-1)



	for (int i = 0; i < N/2; i++)
	{


	    for (int l = 0; l < N;)
        {
            for ( int j = 0; j < num_0; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << z;
                l++;
            }

            for ( int j = 0; j < num_1; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << x;
                l++;
            }


            for ( int j = 0; j < num_2; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout <<z;
                l++;
            }

            for ( int j = 0; j < num_3; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << x;
                l++;
            }

            num_0 ++;
            num_1 --; //  n/2
            num_2 --; // (n/2)-1
            num_3 ++;


        }

        std::cout << std::endl;
	}

    num_0 = (N/2) ;
    num_1 = 0 ;
    num_2 = (N/2) - ((N/2)-1);
    num_3 = (N/2)-1 ;

    for (int i = 0; i < N/2; i++)
    {


	    for (int l = 0; l < N;)
        {
            for ( int j = 0; j < num_0; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << x;
                l++;
            }

            for ( int j = 0; j < num_1; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << z;
                l++;
            }


            for ( int j = 0; j < num_2; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout <<x;
                l++;
            }

            for ( int j = 0; j < num_3; j++)
            {
                if (l == N)
                {
                    break;
                }
                std::cout << z;
                l++;
            }

            num_0 --;
            num_1 ++; //  n/2
            num_2 ++; // (n/2)-1
            num_3 --;


        }

        std::cout << std::endl;
	}

}

