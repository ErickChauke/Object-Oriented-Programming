#include <iostream>

using namespace std;

class A{

///With constructor
private :            //Private access specifier- variable age cannot be used outside class A
    int age;
public:              //Public Access specifier-everything under this access specifier can be used ouside class(anywhere).
    A(int x)         // A()    ->This is no parameterized constructor
    { age=x;}        //{age=0}


    int getData()
    {return age;}

    /*
    ///Without constructor
    private :            //Private access specifier- variable age cannot be used outside class A
         int age;

    public:              //Public Access specifier-everything under this access specifier can be used ouside class(anywhere).
       void setData(int x=0)
       { age=x;}

       int getData()
       {return age;}    */


};

int main()
{
    A a_obj(28);                     //With constructor we eliminate the use of a function to get data, creates object and loads data in one go
    cout << a_obj.getData();         //A return function can be printed out.

    ///Same program without constructor
    /*                                      //Disadvantage is that you have to create object first and then get data using one of functions
     A a_obj;                               //in class
     a_obj.setData(28);
    cout << a_obj.getData();  */

    return 0;
}
