#include <iostream>

using namespace std;

///Operator Approach
//There are two ways to overload, in this program we use operator approach
//-This approach in order to add, operator has to be overloaded.

class A{

  public :              //private access specifier
      int weight;
  public:
    A(int x=0)           //When object is created, x is automatically assigned to weight
    { weight=x; }

    void PrintValue()    //Function used to print weight varible value into the console.
    { cout << "Weight is " << weight << endl; }

    A operator+(A obj)     //Format: class (or data type), operator followed by sign(+,-,*,...), paranthesis passing object.
    {   A temp;
        temp.weight=weight + obj.weight;    //Objects temp initially have weight component equal to zero. Object obj have weight component of the object passed. weight is the component of the object before + operator. try cout << weight << endl;
        return temp;                        //weight here is the .weight component of the object before + sign when adding two objects. (value of objj1 in objj1+objj2)
    }
};

int main()
{
    ///Manual way
    int a=34, b=45, c=0;
    c=a+b;
    cout << "Total=" << c << endl;

    ///Operator overload
    A person1(89);             //Parameterized objects
    A person2(99);
    A total;
    //After constructors, person1.weight=89, person2.weight=99, and total.weight=0;

    total=person1+person2;    //If this line is executed without overloading +, the code will have errors.
    total.PrintValue();

    return 0;
}

