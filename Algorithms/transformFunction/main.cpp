#include <iostream>
#include <vector>
#include <algorithm>                //tranform directive

///transfor algorithm
//transform(first, last, result, op)
//*first and last represent a pair of iterators which specify a range.
// result represents an iterator pointing to the start of the output range.
//
//transform applies the function op to each of the elements in the specified range
//and stores the value returned by op in the range that begins at result.


using namespace std;

//Multiply and Add functions.
//Multiply is urinary function(pass input element) and Add is binary function (pass two elements as arguments)
int fun(int x)
{
    return x*2;        //Multiply function
}

int fun2(int x, int y)
{
    return x+y;       //Add function
}
int main()
{
    vector<int> vec1, vec2;
    for(int i=1; i<6; i++)
    {
        vec1.push_back(i);
        vec2.resize(vec1.size());       //saving memory
    }                                   //std::resize() changes the size of vector. If n is smaller than current size then extra elements are destroyed
                                        //If n is greater then current container size then new elements are inserted at the end of vector.

    ///Transform algorithm
    //for unary operation
    transform(vec1.begin(), vec1.end(), vec2.begin(),fun);    //transform algorithm applied

    for(auto it=vec2.begin(); it!=vec2.end(); ++it)
    {
        cout << *it << " ";                                 //displaying results
    }
    cout << endl;


    vector<int> numbers1={1, 3, 9};
    vector<int> numbers2={1, 3, 9};
    vector<int> result;

    //for binary operation
    transform(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers1.begin(), fun2);  //Stores results to numbers1

    for(int iter: numbers1) //efficient way to use iterator
    {
        cout << iter << " ";
    }


    return 0;
}
