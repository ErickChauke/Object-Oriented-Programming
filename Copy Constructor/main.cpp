#include <iostream>

using namespace std;

class A{

///Copy constructor
private :            //Private access specifier- variable age cannot be used outside class A
    int age;
public:              //Public Access specifier-everything under this access specifier can be used ouside class(anywhere).
    A(int x)         // prameterized constructor
    { age=x;}

    A(A&a_obj1)      //Copy Constructor
    {age=a_obj1.age;}  //copy constructor is parameterized

    int getData()
    {return age;}


};

int main()
{
    A a_obj1(28);       //Parameterized constructor
    A a_obj2(a_obj1);   //Copy constructor -> passes an object: copies the contents of a_obj1

    cout << a_obj2.getData();

    //Different objects have different values, passing an object by reference copies the the contents of that object.
    //i.e 28 is also copied for object a_obj2.

    return 0;
}
