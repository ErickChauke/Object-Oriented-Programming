#include <iostream>
#include <memory>          //Include this to use smart pointers

using namespace std;

///Shared Pointer
//shared_ptr is a smart pointer which can share the ownership of object (managed object)
///several shared_ptr can point to the same object (managed object)
//It keeps a reference count to maintain how many shared_ptr are pointing to the same object
//and once the last shared_ptr goes out of scope then the managed object gets deleted

//shared_ptr is thread safe and not thread safe (control block is thread safe, and managed object is not)
//there are three ways the shared_ptr will destroy managed object:
// - if the last shared_ptr goes out of scope
// - If you initialize shared_ptr with some other shared_ptr
// - if you reset shared_ptr

//reference count does not work when we use reference or pointer of shared_ptr

 class money
{
  public:
       explicit money(int value):value_{value}
      {}                       //parameterized constructor

      int getVal()
      {return value_;}

      ~money()                 //Classes can only use one destructor, and all destructor don't have parameters
       {cout << "money destructor used" << endl;}

       //when using shared_ptr the destructor for class is automatically use this
       //used as
       // ~money()
       // { delete ptr )

  private:
    int value_;
};

int main()
{
    //Don;t confuse shared pointers with vectors because they are
    //declared similar.

    money *ptr1 = new money(10);
    cout << ptr1 ->getVal() << endl << endl;    //Does not de-allocate memory after object ptr1 goes out of scope
                                               //otherwise the destructor would have been called to delete memory
    shared_ptr<money> ptr2(new money(1));
    cout << ptr2->getVal() << endl;

    //shared pointer can have many objects pointing to the same address,
    //an example is as shown below where ptr3... takes adress of object ptr1
    //you can also count the objects used using ptr.use_count()

    shared_ptr<money> ptr3 = ptr2;            //using address of object ptr2
    cout << "how many objects use same adress as ptr2 =" << ptr2.use_count() << endl;
    shared_ptr<money> ptr4 = ptr3;
    cout << "how many objects use same adress as ptr2 =" << ptr3.use_count() << endl;  //You can use any of the shared_ptr for use_count()
                                                                                       //that shares the same adress as ptr2 it will give the right count answer

    //If we take another object and pass it by reference, the use_count will stay
    //the same because that is more like giving an alias not making another pointer object
    //e.g.
    shared_ptr<money> &ptr5 = ptr2;
    cout << "how many objects use same adress as ptr2 =" << ptr2.use_count() << endl; //count remains the same, since ptr5 is only an alias to ptr2 (passed by reference)

    return 0;
}
