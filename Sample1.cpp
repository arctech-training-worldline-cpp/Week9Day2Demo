#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter values for a and b";
    cin >> a;
    cin >> b;

    int x = a-b;
    try
    {
        if( x != 0)
        {
            cout << "Result :" << a/x;
        }
        else
        {
            throw(x); // this is called the throw point
            //control cannot return to this position once exception is thrown, control goes to catch section
        }
        
    }
    catch(int i)
    {
        cout << "Exception caught - Divide by zero" << endl;
    }
    //remaing program code
    cout << "End of main" << endl;

    return 0;
}