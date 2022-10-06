#include <iostream>

using namespace std;

///Inheritance
//It is a mechanism where you can to derive a class from another class for a hierarchy of classes
//that share a set of attributes and methods

//Acess specifiers are private, protected, and public
//private - by default the access specifier is private. Anything under private can't be accessed outside the class
//public - data can be accessed outside class
//protected - can be accessed only through enharitance

///parent/base class
class rectangle
{
public :

    ///constructors
    rectangle(){cout << "Default of base class" << endl;}                      //constructor of parent class
    rectangle(int b){cout << "Parameterized of base class " << b << endl; }    //parameterized constructor of base class

    int length;
    int breadth;

    void show()
    {   cout << length <<endl;
        cout << breadth << endl; }
};

///child/derived class
class cuboid : public rectangle
{
public:
    ///constructors
    //doesn't have any constructor

    int height;

    void display()
    { cout << height << endl; }

    ///Access of parameterized constructors
    //cuboid(int b_arg) : rectangle(b_arg)                        //
    //{cout << "parameter of derived class" << b_arg << endl;}
};

int main()
{
    //You can use the object of the child class to access all the things
    //that are public in parent class.

    cuboid cubObj;        //calls non parameterized constructor of base class
    cubObj.length=10; cubObj.breadth=20; cubObj.height=30;
    cubObj.show();
    cubObj.display();

    //cuboid cubObj2(9);  //This line would not work, because objects of derived class are
                         //only able to call the default constructors of the parent class whenever they don't
                         //have constructors of themselves (constructors of parent class are applicable to only no parameterized constructors).

    return 0;
}
