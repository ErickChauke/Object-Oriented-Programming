#include <iostream>

using namespace std;

///Overriding
//Function overriding in C++ is a feature that allows us to use a function
//in the child class that is already present in its parent class.

//Acess specifiers are private, protected, and public
//private - by default the access specifier is private. Anything under private can't be accessed outside the class
//public - data can be accessed outside class
//protected - can be accessed only through enharitance


class base
{
public:
    void Message()
    { cout << "Base Class" << endl; }
};

class derived : public base
{
public:
    void Message()
    { cout << "Derived class" << endl; }
};

int main()
{
    //Both the parent and child class have the same function constructors but just
    //only different in contents, now the question is which function will be called when
    //objects are made
    //e.g.

    //This is more like improving the functionality of the old function from the parent class to
    //a child class

    //The functions will be called upon their objects depending on their class' name

    base b;
    b.Message();

    derived c;
    c.Message();


    return 0;
}
