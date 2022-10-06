#include <iostream>
#include<vector>

using namespace std;

///Templates

//If not sure whether variables are double, int, str, char...
//you might consider using templates

//always declared as
///template <typename or class type>
///class or function declaration;
//the keyword class can be replaced with the keyword typename.
//always declared outside main

template <typename T>  //template parameter list -- T can now represent any type (double, int, str, char, ect.)
T bigger(const T& first, const T& second) //function is now of type T, e.g it can be int or double function (or any type)
{
    if(first>second)     //Determines which variables of the same types is bigger, and return biggest
    return first;
    else
    return second;       //it is recommended to use const for return functions
}

template <typename Type>   //you can also use void functions
void money(Type vec)
{ cout << vec.size(); }

int main()
{
    //Function bigger is now generalized it can be used to pass any types to its parameters and compare the content
    //see example below

    ///Comparing doubles
    auto e=5.62, f=3.48;
    cout << bigger(e,f) << endl;

    ///Comparing char
    auto g='A', h='a';
    cout << bigger(g, h) << endl;
    //...

    //~~~~~~~~~~~~~~~~~~~
    ///Type definitions
    //type definitions provide synonyms or aliases for primitive or user defined types (double, int, str, char, ect.)
    //(content of type definitions is included in this stl program just for additional knowledge see examples below)

    //In order to use an aliase, using - declares an aliase
    //e.g
    using age = int;
    age over23persons;       //age will now act as int
    over23persons=34;

    using MarksContainer = vector<int>;
    auto elen3018 = MarksContainer{};

    //using ComplexNumber = complex<float>;
    //auto a = ComplexNumber{1, -1};

    //...
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    return 0;
}
