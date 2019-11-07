#include <iostream>

using namespace std;

int const S = 5;
int arr[S] ={4,12,3,2,1};

void f(int arr[S], int S)
{
    int cnt = 0;
    for (int i = 0; i < S; i++)
    {
        if ( arr[i] % 2 == 0) {cnt++;}
    }
    cout << cnt;
}

int main()
{


    f(arr,S);
//    for (int i = 0 ; i < S; i++)
//    {
//
//        cout << arr[i] << " " ;
//    }
    return 0;
}
