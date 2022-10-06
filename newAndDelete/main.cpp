#include <iostream>

using namespace std;

/*Variables that are created during program execution are called dynamic variables. With
the help of pointers, C++ creates dynamic variables. C++ provides two operators, new
and delete, to create and destroy dynamic variables, respectively. When a program
requires a new variable, the operator new is used. When a program no longer needs a
dynamic variable, the operator delete is used.*/

int main()
{
    ///Operator new
    //The operator new has two forms: one to allocate a single variable and another to allocate
    //an array of variables. The syntax to use the operator new is:

    /* new dataType; //to allocate a single variable
       new dataType[intExp]; //to allocate an array of variables*/

    //The operator new allocates memory (as a variable) of the designated type and returns a pointer to it—that is,
    //the address of this allocated memory. Moreover, the allocated memory is uninitialized.

    int *p;       //p is a pointer of type int
    char *name;   //name is a pointer of type char
    string *str;  //str is a pointer of type string

    p = new int;  //allocates memory of type int and stores the address of the allocated memory in p.
    *p = 28;      //stores 28 in the allocated memory

    name = new char[5]; //allocates memory for an array of five components of type char and stores
                        //the base address of the array in name.

    strcpy(name, "John");  //stores John in name
    str = new string;     //allocates memory of type string and stores the address of the allocated memory in str.
    *str = "Sunny Day";  //stores the string "Sunny Day" in memory pointed to by str.


    ///Operator delete
    // When a program no longer needs a dynamic variable, the operator delete is used.

    //Suppose you have the following declaration:
    int *a;
    a = new int; //Line 1
    *a = 54; //Line 2
    a = new int; //Line 3     //Now the obvious question is what happened to the old memory space of a after line 3
    *a = 73; //Line 4         //the previous memory space at location is now inaccessible.

    /*In addition, the memory space 1500 remains as marked allocated. In other words, it cannot be freed or reallocated.
      This is called memory leak. That is, there is an unused memory space that cannot be allocated.*/
      //The program might then run out of memory spaces for data manipulation, which would result in an abnormal termination of the program.

    //When a dynamic variable is no longer needed, it can be destroyed; that is, its memory can be deallocated.
    //The C++ operator delete is used to destroy dynamic variables. The syntax to use the operator delete has two forms:

    delete pointerVariable; //to deallocate a single dynamic variable.
    delete [] pointerVariable; //to deallocate a dynamically created array.

    delete p;
    delete [] name;
    delete str;

    return 0;
}
