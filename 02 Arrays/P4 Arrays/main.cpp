#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    const int W = 5;
    const int K = 8;
    int arr[W][K];

    int x = 1;

    for (int i = 0; i < K;i++)
    {
        if ( i %2 == 0 )
    {


        for (int j = 0; j < W; j++)     // x 1.2.3.4.5
        {
            arr[j][i] = x;
            x++;
        }
    }
    else
    {
        for (int l = W-1 ; l >= 0; l--) // x 6.7.8.9.10
        {
            arr[l][i] = x;
            x++;
        }


    }

    }

    for (int w = 0; w < W; w++ )
    {
        for (int k = 0; k< K; k++)
        {
            cout << setw( 6  )  << arr[w][k];
        }
        cout << endl;
    }
    return 0;
}
