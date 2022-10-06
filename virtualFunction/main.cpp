#include <iostream>

using namespace std;

//The virtual function is the function that is existing but unable to use it

//The folowing classes have the same name of function (function void show())
//class Base is the parent class and others are children class

//It is used on which function to called when parents and children class have same name
//type of functions

///Parent class
class base
{
public:
    void show()
    { cout << "Base Class" << endl;}                    //This function is the one that will be called even if children classes
                                                        //pointing to their classes

    virtual void show2(){cout << "Base Class" << endl;}  //The function becomes virtual, pointer object will output the function
                                                         //corresponding to that functions address.
};

///first child
class deriv1 : public base
{
  public :
      void show()
      {cout << "Derived Class 1" << endl;}
      void show2(){cout << "Derived Class 1" << endl;}
};

///second child
class deriv2 : public base
{
   public :
       void show(){cout << "Derived Class 2" << endl;}
       void show2(){cout << "Derived Class 2" << endl;}
};

int main()
{
    base *ptr;                //pointer object
    ptr = new deriv1();       //ptr pointing to deriv1
    ptr->show();              //This will output the show function of the base class

    ptr = new deriv2();       //ptr pointing to deriv2
    ptr->show();              //This will also output the contents of the show function in base class again
                              //regardless of the point pointing to child classes

    cout << endl;

    //Now in order to access the show functions in children classes
    //we should make the show function in base class be virtual

    base *ptr2;
    ptr2 = new deriv1();
    ptr2->show2();             //will execute the function show in deriv1

    ptr2 = new deriv2();
    ptr2->show2();            //will execute the function show in deriv2

    return 0;
}
