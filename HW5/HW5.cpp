#include <iostream>
#include <limits> //to get limits
using namespace std;

int main()
{
    //to get size
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;

    //to find limits
    cout << "Minimum value of short: " << numeric_limits<short>::min() << endl;
    cout << "Maximum value of short: " << numeric_limits<short>::max() << endl;

   
    cout << "Minimum value of double: " << numeric_limits<double>::min() << endl;
    cout << "Maximum value of double: " << numeric_limits<double>::max() << endl;

    return 0;

}


