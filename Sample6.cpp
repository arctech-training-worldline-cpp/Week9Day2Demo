//multiple catch
#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1) throw x;
        else
            if (x == 2 ) throw 'X';
            else    
                if( x == 3) throw 1.5;
        cout << "End of try block";
    }   
    catch(char c)
    {
        cout << "Caught a character" << endl;
        throw c;
    }
    catch(int m)
    {
        cout << "Caught a int" << endl;
    }
    catch(double m)
    {
        cout << "Caught a double" << endl;
    }
    
}

int main()
{
    try
    {
        test(1);
        test(2);
        test(3);
    }
    // catch(char c)
    // {
    //     cout << "caught re throw" << endl;
    // }
    catch(exception e)
    {
        cout << e.what()<< endl;
    }
    
   
    return 0;
}