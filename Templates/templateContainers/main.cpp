#include <iostream>
#include<vector>
#include <list>

//This program is a generic bubble sort which works with different data types and different containers

using namespace std;

template<typename Type>
void whatDoesThisDo(Type &container, int n)
{
    for (auto pass=1; pass < n; pass++)
    {   for (auto i=0; i < n-pass; i++)
        { if (container[i] > container[i+1])
          { auto temp = container[i];
            container[i] = container[i+1];
            container[i+1] = temp;
          }
        }
    }
}

int main()
{
    /*Ways of declaring arrays
    int foo[] = { 10, 20, 30 };
    int foo[] { 10, 20, 30 };
    int foo[5];*/

    ///Using integer data type
    //Array container
    int numbers[] = {34, 23, 56, 1, 55, 7};
    whatDoesThisDo(numbers, 6);
    for (int i = 0; i < 6; i++) cout << numbers[i] << " ";             //for loop before new line is considered one thing.
    cout << endl;

    //using other data types:
    ///Using float data type
    //vector container
    auto vec = vector<float>{3.4, 6.21, 4.00, 1.2, 5.0, 7.9};
    whatDoesThisDo(vec, 6);
    for (int i = 0; i < 6; i++) cout << vec[i] << " ";
    cout << endl;

    ///Using char data type
    //vector container
    auto vec2 = vector<char>{'b', 'e', 'z', 'c', 'a', 'o'};
    whatDoesThisDo(vec2, 6);
    for (int i = 0; i < 6; i++) cout << vec2[i] << " ";
    cout << endl;

    //result:  1 7 23 34 55 56
    //         1.2 3.4 4 5 6.21 7.9
    //         a b c e o z


    return 0;
}
