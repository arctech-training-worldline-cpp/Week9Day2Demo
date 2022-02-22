//throw exception in a function and let the caller of the function handle the exception
#include <iostream>
using namespace std;

void divide(int x, int y, int z)
{
    cout << "Inside the divide function" << endl;
    if( x-y != 0)
    {
        cout << "Result :" << z/(x-y) << endl;
    }
    else
    {
        throw (x-y);
    }

    cout << "End of divide function" << endl;
}

int main()
{
    try
    {
        cout << "We are inside the try block" << endl;
        divide(10, 20, 30);
        divide(10, 10, 30);
    }
    catch(int i)
    {
        cout << "Exception caught" << endl;
    }
    
    cout << "End of main" << endl;
    return 0;
}