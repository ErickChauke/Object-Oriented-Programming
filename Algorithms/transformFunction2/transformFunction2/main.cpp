#include <iostream>
#include<vector>
#include<algorithm>

//This program output the length of each of the strings provided in vector words.

using namespace std;

int fun(string str)
{
    return str.size();
}

int main()
{
     auto words = vector<string>{"This", "is", "a", "short", "sentence"}; //It is advised to declare and assign vector in one line.
     vector<int>lengthOfWord;
     lengthOfWord.resize(words.size());

     transform(words.begin(), words.end(), lengthOfWord.begin(), fun);

     for(int iter: lengthOfWord) //efficient way to use iterator
     { cout << iter << " ";  }   //output of length of strings in order.


 return 0;
 }
