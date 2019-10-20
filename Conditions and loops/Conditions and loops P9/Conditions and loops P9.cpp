#include <iostream>

void do_x()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "X" ;
    }
}

void do_()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "." ;
    }
}



int main()
{
    std::cout << "Enter N:";
    int N;
    std::cin >> N;

    bool rev = 0;
    bool bck = 0;
    int counter = 0;

    for( int w = 0; w < N*N ; w++)
    {

        counter++;
        rev = 0;
        for ( int i = 0; i <N ; i++)
        {

            if (bck == 0 )
            {

                if (rev == 0 )
                {
                    do_x();
                    rev = 1;
                }
                else
                {
                    do_();
                    rev = 0;
                }
            }

            else
            {

                if (rev == 0 )
                {
                    do_();
                    rev = 1;
                }
                else
                {
                    do_x();
                    rev = 0;
                }
            }


        }

        if ( counter == N )
        {

            bck = 1;
        }

        if ( counter == N *2 )
        {

            bck = 0;
        }

    std::cout << std::endl;
    }
return 0;
}


