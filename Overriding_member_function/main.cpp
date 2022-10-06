#include <iostream>

using namespace std;

///Function Overriding
//Function overriding in C++ is a concept by which you can define a function of the same name and the same
//function signature (parameters and their data types) in both the base class and derived class with a different function definition.
//It redefines a function of the base class inside the derived class, which overrides the base class function.

//Overriding is needed when derived class function has to do some added or different job than the base class function.
//Overloading is used to have same name functions which behave differently depending upon parameters passed to them.

//example is like, when we call print() from the Derived object derived1 , the print() from Derived is
//executed by overriding the function in Base (improving the function in another class)

class base
{
public :
    void Message()
    {
        cout << "base class" << endl;
    }
};

class derived : base
{
    public:
    void Message()
    {
        cout << "derived class" << endl;
    }
};

//When the base class and derived class have member functions with exactly the same name,
//same return-type, and same arguments list, then it is said to be function overriding.
//Now to use the override keyword
//example
//parent
class money
{
  public:
    virtual int func(float x) = 0;
};

//child1
class moneyDerived: public money
{
   public:
     int func(float x) override {  } // OK, will give no errors
};

//child2
class moneyDerived2: public money
{
   public:
     //int func(int x) override { } // ERROR, it will give error because you trying to override a different function from base class
                                     //they differ with type inside parameters
};
//~~~~~~~~
//~~~~~~~~
//~~~~~~~~
//~~~~~~~~
int main()
{
    base bObj;       //When you make the object using base class the function in base class
    bObj.Message();  //can be called using the object despite being void or anything of being having the same name in other classes
                     //this is function overriding

    derived dObj;
    dObj.Message();


    return 0;
}
