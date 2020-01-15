#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

int main()
{
    ofstream output_stream("test");
    if (output_stream)
    {
        output_stream << "Test";
    }

    ifstream input_stream("liczby");
    if (input_stream)
    {   char x;
        while ( input_stream >> x)
        {
            cout << x<< endl;
        }
        input_stream.close();
    }

    return 0;
}
