#include <iostream>

using namespace std;

///Base class pointer and derived class object

///Polymorphism
//Polymorphism in OOPs is inseparable and an essential concept of every object-oriented programming language.
//An object or reference basically can take multiple forms in different instances. As the word suggests,
//‘poly’ means ‘many’ and ‘morph’ points at ‘forms’; thus, polymorphism as a whole would mean
//‘a property of having many forms.’

class basicCar
{
public :
    void body();
    void door();
    void windows();
    void tyres();
};

class advancedCar : public basicCar
{
  public :
      void ABS();
      void turbo();
      void engineV8();
      void AT();
};

int main()
{
    basicCar *ptr;                //object is of a pointer
    ptr = new advancedCar();      //giving object memory

    ptr->body();                  //ptr can now have many forms such as body(), door(), ect.
    ptr->door();
    ptr->windows();
    ptr->tyres();

    //Even though ptr have address of advancedCar, it can never have the forms of advancedCar class,
    //e.g. never the forms, ptr->ABS(), ptr->PS(), ptr->engineV8, ect.


    return 0;
}
