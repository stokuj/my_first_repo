#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cmath>)
using namespace std;



struct point
{
    double x , y , z ;
} ;

double distance( const point &a , const point &b)
{



    cout << sqrt((a.x -b.x)*(a.x -b.x) + (a.y - b.y)*(a.y - b.y) + (a.z - b.z)*(a.z - b.z)) ;
}



int main()
{
    struct point a;
    struct point b;

    a.x = 2;
    a.y = 5;
    a.z = 1;
    b.x = 5;
    b.y = 9;
    b.z = 4;

    distance(a,b);
    return 0;
}


