#include <iostream>

using namespace std;

class Person{

  private:
      int weight;
  public:
    Person(int x=0)
    { weight=x; }

    void PrintValue()
    { cout << "weight=" << weight << endl; }

    Person operator++()        //Another format is using:  void, operator followed by sign, then paranthesis
    { ++weight;   //function of the operator you overloaading.
                   }

    Person operator++(int) //this one is for the post increment, int in the paranthesis has been put so the the function is different from the pre-increment one.
    { weight++; }
};

int main()
{
    ///Manual way
    int a=63;
    ++a;

    ///Overloading
    /*Person Jon(63);
    ++Jon(63); ->>wrongway*/

    Person Jon(78);
    ++Jon;
    Jon.PrintValue();

    Jon++;
    Jon.PrintValue();

    return 0;
}
