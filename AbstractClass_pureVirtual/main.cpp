#include <iostream>

using namespace std;

//A pure virtual function is a function that must be overridden in a derived class and need not be defined.
//A virtual function is declared to be “pure” using the curious =0 syntax.

//Not only constructors use virtual, even functions like void also does.

class person
{
public:
    virtual void give() = 0; //This function is pure virtual which means we made it
                             //to not exist
                             //It is only  acting as a parent and does not make any activities
};

class girl: person
{
public:
    void give()
    {
        cout << "Pink" << endl;
    }
};

class boy: person
{
    void give()
    {
        cout << "Blue" << endl;
    }
};

int main()
{

    return 0;
}
