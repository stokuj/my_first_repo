#include <iostream>

using namespace std;

void f(int a, int b ,int c, int d, int e)
{
    int min_f = a;
    if ( b < min_f )
    {
        min_f = b;
    }
    if ( c < min_f )
    {
        min_f = c;
    }
    if ( d < min_f )
    {
        min_f = d;
    }
    if ( e < min_f )
    {
        min_f = e;
    }
    cout << min_f;
}

int main()
{
    f( 5,2,3,0,-10);
    return 0;
}
