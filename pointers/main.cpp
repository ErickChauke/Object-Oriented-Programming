#include <iostream>

using namespace std;

///Pointers
//a pointer variable is a variable whose content is an address, that is, a
//memory location and the pointer variable is said to point to that memory location.

//The value of a pointer variable is an address or memory space that typically contains some data.
//Therefore, when you declare a pointer variable, you also specify the data type of the
//value to be stored in the memory location pointed to by the pointer variable. For
//example, if a pointer variable contains the address of a memory location containing an
//int value, it is said to be an int pointer or a pointer (variable) of type int.

int main()
{
    int *p;    //In these statements, both p and ch are pointer variables. The content of p (when properly assigned)
    char *ch;  //points to a memory location of type int, and the content of ch points to a memory location of type char.

    int *ptr; int*  ptr1; int * ptr2;   //These declarations are equivalent, the character * can appear anywhere
                                      //between the data type name and the variable name.

    ///Address of Operator (&) and Dereferencing Operator (*)
    //C++ provides two operators—the address of operator (&) and the dereferencing operator (*)—to work with pointers.

    //In C++, the ampersand, &, called the address of operator, is a unary operator that
    //returns the address of its operand. For example, given the statements:

    int x;
    int *p1;
    p1 = &x;    //assigns the address of x to p. That is, x and the value of p refer to the same memory location.

    int num1, num2;
    int *numptr;
    num1=100;
    numptr = &num1;  //we are asking the program to copy the address of the memory location of num1 to numptr,
                     //not the integer value it is holding. The pointer numptr will not contain 100, but the actual
                     //address num1 has been assigned by the operating system.

                     //(In a sense, since the name num1 stands for the memory address of num1’s value,
                     //and numptr contains the address of num1, numptr is really holding the name num1.
                     //This makes numptr a reference to num1.)

    cout << num1 << endl;    //will output 100 onto the screen
    cout << numptr << endl;  //will output an address usually displayed in hexadecimal digits

    //the dereference operator, we will explain how to output the value of the memory location whose address
    //is stored in numptr.

    //* commonly referred to as the dereferencing operator or indirection operator, refers
    //to the object to which its operand (that is, the pointer) points.

    cout << *p1 << endl;  //prints the value stored in the memory space pointed to by p1, which is the value of x.

    *p1 = 55;  //stores 55 in the memory location pointed to by p—that is, in x.


    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    //Consider the following statements:

    int *a;
    int num;

    num = 78;
    a = &num;   cout << *a << endl;
   *a = 24;

    //&a, a, and *a all have different meanings.

    //&p means the address of a
    //*a means the content of the memory location to which a points.
    //the statement a = &num; executes, the value of *a is 78; after the statement *a = 24; executes, the value of *a is 24.



    return 0;
}
