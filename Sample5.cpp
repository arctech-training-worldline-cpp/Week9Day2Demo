//catching class types as exceptions
#include <iostream>
#include <cstring>
using namespace std;

class Error
{
    private:
        int err_code;
        char * err_desc;
    public:
        Error(int c, const char * d)
        {
            err_code = c;
            err_desc = new char[strlen(d)];
            strcpy(err_desc, d);
        }
        void err_display(void)
        {
            cout << "Error code : " << err_code << endl;
            cout << "Error description : " << err_desc << endl;
        }
};

class Exception: public std::exception
{
public:
    
    Exception(const char* message)
        : msg_(message) {}
    ~Exception()  {}
    
    // virtual const char* what() const noexcept {
    //    return msg_.c_str();
    // }

protected:
    /** Error message.
     */
    std::string msg_;
};

int main()
{
    try
    {
        cout << "Press any key to throw a test exception" ;
        cin.get();
        //throw Error(99, "Test Exception");
        throw Exception("Inherit");
    }
    catch(Error e)
    {
        cout << "Exception caught successfully" << endl;
        e.err_display();    
    }
    catch(Exception e)
    {
        cout << e.what();
    }
    
    return 0;
}