#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    const int W = 5;
    const int K = 4;

    int arr[W][K] = {};

    int x = 1;

    for (int i = 0; i < K; i = i+2)
    {

    for (int j = 0; j < W; j++)
    {
    arr[j][i] = x;
    x++;
    }

    for (int k = K; k >= 0; k--)
    {
    arr[k][i+1] = x;
    x++;
    }


    }


//    int x = 1;
//    int y = 1;
//    while ( x <= 20)
//    {
//        while ( y <= 5)
//        {
//
//            arr[W][K] = y
//
//
//        }
//
//
//    }
//

////////////////////////////////////////
    for (int w = 0; w < W; w++ )
    {
        for (int k = 0; k< K; k++)
        {

            cout << setw(3)  << arr[w][k];


        }
        cout << endl;
    }
    return 0;
}
