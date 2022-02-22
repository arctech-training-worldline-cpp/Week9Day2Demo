//multiple catch - exception object matched to respective catch block and default catch
#include <iostream>
using namespace std;

void test(int a)
{
    if (a == 1) throw a;
    else
        if(a == 2) throw 'A';
        else
            if(a == 3 ) throw 1.6;

    cout << "End of divide method" << endl;
}

int main()
{
    try
    {
        test(1);
        // test(2);
        // test(3);
    }
    
    catch(int i)
    {
        cout << "caught an int" << endl;
    }
    catch(double i)
    {
        cout << "caught a double" << endl;
    }
    catch(char i)
    {
        cout << "caught a char" << endl;
    }
    catch(...) //default catch -  all throws are caught by ...
    {
        cout << "Caught an exception" << endl;
    }

    cout << "End of main" << endl;
    return 0;
}