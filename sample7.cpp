//base and derived class exception
#include <iostream>
using namespace std;

class Base{};
class Derived : public Base {};

int main()
{
	Derived d;
	//Base b;
	try
	{
		throw d;
		//throw b;
	}
	catch(Derived d) // this block is only executed in case it is put beofer the base class catch
	{
		cout << "Derived class catch" << endl;
	}
	catch (Base b)
	{
		cout << "Base class cach" << endl;
	}
	
	return 0;
}