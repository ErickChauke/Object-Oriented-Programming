#include <iostream>

using namespace std;

///Static variable
//A variable for which memory remains allocated as long as
//the program executes is called a static variable.           (does not deallocate memory, does commands everytime the function is called)

///Automatic variable
//A variable for which memory is allocated at block entry and deallocated at block exit

//-Global variables are static variables, and by default, variables declared within a block are automatic variables.    (every variable by default is automatic)
//-it is a good practice to initialize static variables yourself, especially if the initial value is not the default value.
// For example, static int variables are initialized to 0 for the first time.
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//The following program shows how static and automatic variables behave.

void test();

int main()
{
    int count;
    for (count = 1; count <= 5; count++)
    test();

    //results:
    //Inside test x = 2 and y = 11
    //Inside test x = 4 and y = 11
    //Inside test x = 6 and y = 11
    //Inside test x = 8 and y = 11
    //Inside test x = 10 and y = 11

    ///further explanation
    //The function main calls the function test five times.
    //In the function test, x is a static variable initialized to 0, and y is an automatic variable initialized to 10.
    //Memory for the variable y is allocated every time the function test is called and deallocated when the function exits.
    //Thus, every time the function test is called, it prints the same value for y.
    //However, because x is a static variable, memory for x remains allocated as long as the program executes.
    //The variable x is initialized once to 0, the first time the function is called.
    //The subsequent calls of the function test use the value x had when the program last left (executed) the function test.

    /*Because memory for static variables remains allocated between function calls, static
      variables allow you to use the value of a variable from one function call to another
      function call. Even though you can use global variables if you want to use certain values
      from one function call to another, the local scope of a static variable prevents other
      functions from manipulating its value.*/

    return 0;
}

void test()
{
         static int x = 0;
         int y = 10;
         x = x + 2;
         y = y + 1;
         cout << "Inside test x = " << x << " and y = " << y << endl;
}
