#include <iostream>

//Understanding pointers, references, and dereferencing.

using namespace std;

///References
//In c++, a reference is an alias for an existing object
//once a reference has been defined, any operation on the reference is also applied to the
//object being referenced.

//you define a reference as
/// dataType& ref


//Three functions below: function by just passing, function using referencing, and function using pointers.
///function by just passing
void increment(int value)
{  value=value++; }

///function using referencing
void decrement(int& value)
{  value--; }

///function using pointers
void add2(int*value)
{ (*value)=(*value)+2;}

int main()
{
    //References themselves are not new variables, they don't occupy memory and don't have storage.
    //they're not like typical variables they are just reference to an existing variable.

    //An ampersand-& in c++ is used for two reasons:
    //To define a reference or dereference an address of a variable, that's two different things.
    //dereferencing is more like getting the address of a variable but referencing is more like giving a variable an alias
    //examples:

    ///Ampersand to define reference
    int a=5;        cout << "variable-a a=" << a << endl;
    int& ref1=a;   //To define a new reference an ampersand(&) is part of a datatype. ref1 was assgigned an existing variable
    ref1++;       //everything that happens to ref1 will also happen to variable a;
                 //ref1 and variable a is one variable

    cout << "variable-a after ref1 is operated a=" << a << endl;

    ref1=3;
    cout << "variable-a after ref1 is assigned new value, a=" << a << endl;

    ///Ampersand to dereference
    int*b=&a;   //defining a pointer and giving it an address of variable a(dereferencing)
    cout << "content of pointer b have same value as variable-a, *b=" << *b << endl << endl;


    ///Applying functions
    increment(a);        //doesn't do anything to variable-a because the contents get copied to another new variable inside
                         //function increment (variable value), thus a will stay the same
    cout << "a after increment function, a=" << a << endl;

    decrement(ref1);     //one will be subtracted to variable-a because an alias inside function decrement has been made and ref1 is
                        //also another alias of variable-a, so aliases ref1 and value inside parenthesis of function decrement are the same as variable-a.
    cout << "a after decrement function, a=" << a << endl;

    add2(b);       //b has address of variable-a, so variable-a content will be decremented
    cout << "a after add2 function, a=" << a << endl;


    return 0;
}
