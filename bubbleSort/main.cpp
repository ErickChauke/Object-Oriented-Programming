
#include <iostream>
#include<vector>
#include<algorithm>

//This program is a generic bubble sort which works with different data types

using namespace std;

//Bubble sort function
template <typename Type>                 //Make the function acommodate any data type
void whatDoesThisDo (Type x[], int n)
{
    for (auto pass=1; pass < n; pass++)
    {   for (auto i=0; i < n-pass; i++)
        { if (x[i] > x[i+1])
          { auto temp = x[i];
            x[i] = x[i+1];
            x[i+1] = temp;
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
    int numbers[] = {34, 23, 56, 1, 55, 7};
    whatDoesThisDo(numbers, 6);
    for (int i = 0; i < 6; i++) cout << numbers[i] << " ";             //for loop before new line is considered one thing.
    cout << endl;

    //using other data types:
    ///Using double data type
    double numbersDouble[] = {34, 23.21, 56.00, 1.2, 55.0, 7.9};
    whatDoesThisDo(numbersDouble, 6);
    for (int i = 0; i < 6; i++) cout << numbersDouble[i] << " ";
    cout << endl;

    ///Using char data type
    char alphabets[] = {'b', 'e', 'z', 'c', 'a', 'o'};
    whatDoesThisDo(alphabets, 6);
    auto vec = vector<int>{34, 23, 56, 1, 55, 7};
    whatDoesThisDo(vec, 6);
    for (int i = 0; i < 6; i++) cout << vec[i] << " ";
    cout << endl;

    return 0;
}
