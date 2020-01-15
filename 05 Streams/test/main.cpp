#include <iostream>
#include <fstream>

using namespace std;


int main()
{

    ofstream out_s("tekst2.txt");
    ifstream  in_s("tekst1.txt");

    if(in_s)
    {
        string word;
        string temp = "null";

        while( in_s >> word )
        {
            if( temp != word)
            {
                out_s << word << " ";
                temp = word;
            }
        }
    }
    return 0;
}
