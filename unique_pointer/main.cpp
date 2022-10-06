#include <iostream>
#include <memory>               //always use this directory to use smart pointers

using namespace std;

///Smart pointers

//Smart pointer is a class which wraps a raw pointer, to manage the life time of the pointer. (you make a class)
//The most fundamental job of smart pointers is to remove the chances of memory leak.
//It makes sure that the object is deleted if it is not reference anymore.

///Unique_ptr
//Allows only one owner of the underlying pointer

///shared_ptr
//Allows multiple owners of the same pointer (reference count maintained)

///weak_ptr
//It is special type of shared_ptr which does not count the reference


///~~~~~~~Unique pointers~~~~~~~
//unique_ptr is a class template
//unique_ptr wraps a raw pointer in it, and de-allocates the raw pointer, when unique_ptr object goes out of scope.
//similar to actual pointers we can use -> and * on the object of unique_ptr, because it is overloaded in unique_ptr class.
//when exception comes then also it will de-allocate the memory hence no memory leak
//Not only object, we can create array of objects of unique_ptr

//OPERATIONS
//relese, rest, swap, get, get_deleter

//smart pointers take addresses of classes, so that they called destructor automatically
//to delete the address

//Otherwise use uniqure_ptr as:
// unique_ptr<type> pointer
//or unique_ptr<type> pointer = nullptr   to also assign memory

class money
{
  public:
       explicit money(int value):value_{value}
      {}                       //parameterized constructor

      int getVal()
      {return value_;}

      ~money()                 //Classes can only use one destructor, and all destructor don't have parameters
       {cout << "money destructor used" << endl;}

       //when using unique_ptr the destructor for class is automatically use
       //used as
       // ~money()
       // { delete ptr )

  private:
    int value_;
};
int main()
{
    //Don't confuse unique pointers with vectors because they are
    //declared similar.

    money *ptr1 = new money(10);
    cout << ptr1 ->getVal() << endl << endl;    //Does not de-allocate memory after object ptr1 goes out of scope
                                               //otherwise the destructor would have been called to delete memory

    //The above statements are same as below when using unique_ptr
    unique_ptr<money> ptr2(new money(10));    //always declare uniqure_smart pointer like this, money is the class that has
                                              //destructor to delete ptr2 when ptr2 object goes out of scope
    cout << ptr2->getVal() << endl;           //now whatever that is on the destructor will appear, because the destructor in
                                              //money class is being used to delete memory in object ptr2.
    //These are other ways of using unique_ptr
    unique_ptr<int> ptr3(new int(20));
    unique_ptr<money> ptr4 = make_unique<money>(15);
    unique_ptr<money> ptr5 = std::move(ptr4);

    return 0;
}
