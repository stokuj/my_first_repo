#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    const int W = 5 ;
    const int K = 4 ;
    int arr[W][K] = {};

    int x = 1;
//    for (int d = 0; d < 5; d++)
//    {
//        for (int i = 0; i < d; i++)
//        {
//            arr[i][d-i-1] = x;
//            x++;
//        }
//    }
    x = 20;
    for (int i = 5; i >= 0; i--)
    {
        for (int d = 5; d >= i; d--)
        {
            arr[i][d-i-1] = x;
            x--;
        }
    }





////////////////////////////////////////////////
    for (int w = 0; w < W+1; w++ )
    {
        for (int k = 0; k< K+1; k++)
        {
            cout << setw( 6  )  << arr[w][k];
        }
        cout << endl;
    }
    return 0;
}
