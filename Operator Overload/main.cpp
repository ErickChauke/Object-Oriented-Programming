#include <iostream>

using namespace std;

///Traditional Approach
//There are two ways to overload, in this program we use traditional approach
//-This approach in order to add, the add function has to be available and called.

class A{

  public :              //private access specifier
      int weight;
  public:
    A(int x=0)           //When object is created, x is automatically assigned to weight
    { weight=x; }

    void PrintValue()    //Function used to print weight varible value into the console.
    { cout << "Weight is " << weight << endl; }

    A addWeight(A obj)                   //Objects have their own values.
    {   A temp;
        temp.weight+obj.weight;
        return temp; }
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

    return 0;
}
