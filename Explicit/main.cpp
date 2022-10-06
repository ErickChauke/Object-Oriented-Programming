#include <iostream>

using namespace std;

//Explicit Keyword in C++ is used to mark constructors to not implicitly convert types in C++.
//It is optional for constructors that take exactly one argument and work on constructors(with a single argument)
//since those are the only constructors that can be used in typecasting.

//explicit constructor avoids implicit call to the constructor

class Base
{
   public:
       Base(){}
       Base(int var) : b_var(var)
       { }

       void print(){cout << b_var << endl;}

   private:
    int b_var;
};

void func(Base b)
{ b.print(); }

int main()
{
    Base obj1(10);        //Normal call to constructor
    Base obj2 = 20;       //implicit call to the constructor

    //This also applies to functions
    func(obj1);          //Normal call to constructor
    func(30);            //implicit call to constructor, implicit because the function
                         //is expecting object not int value but it pass and becomes correct because the compiler converts
                         //30 to an object and then suddenly calls function print. This happens when the time is same Base(int var)
                         //var is an integer and 30 is an integer to the compiler implicitly call the constructor even though 30 was passed not an object.

    //To stop implicit call which my cause problems, explicit keyword is added in front of constructor
    //e.g. the Base constructor would be
    // explicit Base(int var) : b_var(var)


    return 0;
}
