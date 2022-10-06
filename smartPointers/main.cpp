#include <iostream>

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

//The class needed for pointer
// basic idea:
class myInt
{
public :
    explicit myInt(int*p=nullptr)   //Made explicit because we don't want to call constructors implicitly
    { data = p; }

    ~myInt()
     {delete data;}           //destructor so that pointer delete automatically

     int& operator * ()       //overload *, to get the contents of variable data (dereference)
     {return *data;}
};

int main()
{
    int * p = new int(10);
    myInt myint = myInt(p);      //p will go straight to be stored in data, and will be deleted automatically by destructor
    cout << *myint << endl;

    return 0;
}
