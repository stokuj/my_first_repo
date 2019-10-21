#include <iostream>

using namespace std;

void first_last_line(int N, int x)
{
    for (int i = 0; i < x; i++)
    {

        cout << "." << "#";

    }



    for (int i = 0; i < N-x*2; i++ )
    {

        cout << "#";
    }

    for (int i = 0; i < x; i++)
    {

        cout  << "#" << ".";

    }





}

int main()
{
    int N;
    int counter = 0;


    cout << "Enter N: ";
    cin >> N ;

    first_last_line(N,1);


//
//    for (int i = 0; i < N; i++)
//    {
//        cout << "#";
//
//        for (int j = 0; j < N; j++)
//        {
//            if (i%2 == 1)
//            {
//                cout << ".";
//            }
//            else
//            {
//                cout << "#";
//
//            }
//        }
//        cout << "#";
//        cout << endl;
//    }



    return 0;
}
