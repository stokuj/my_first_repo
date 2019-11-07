#include <iostream>

using namespace std;

int a = 24;
int b = 32;

int GCD(int a,int b)
{
    if ( b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}



int main()
{
    cout << GCD(a,b);
    return 0;
}
