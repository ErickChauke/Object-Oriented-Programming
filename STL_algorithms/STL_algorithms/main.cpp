#include <iostream>
#include<numeric>                 //directive for stl algorithms.

///STL algorithms
//The algorithms are generic because they depend on iteratorsand have no knowledge of
//the container which those iterators are pointing into - they are not member functions of vectors, list, etc.

///Searching, sorting, substitution, etc
//are declared in <numeric>

//Algorithms solve everything about containers problems (vectors, arrays, lists, etc.) they're a
//connection between iterators and containers (like summing up all contents of container, bubble sort, find elements, etc).

using namespace std;

int main()
{
    ///Examples include,
    //add elements
    iterator ivec
    auto sum = accumulate(begin(ivec), end(ivec), 0);

    //find elements
    auto result = find(begin(ivec), end(ivec), 12);


    ///Transform algorithm
    //transform(first, last, result, op)
    //
    //first and last represent a pair of iterators which specify range.
    //result represents an iterator pointing to the start of the output range.
    //
    //transform applies the function op to each of the elements in the specified range and stores the
    //value returned by op in the range that begins at result.
    //op can either be a function pointer or a function object.
    //The transform function allows for the destination range to be the same as the
    //the input range to make transformation in place.
    //transform returns an iterator pointing to the element that follows the last
    //written in the result sequence.


    return 0;
}
