
//Author: 1701547
include <iostream>

using namespace std;

int main()
{
        unsigned long prevTerm, nextTerm, tempNum, numberOfTerms;

    cout << "How many Fibonacci numbers do you want to print?" << endl;
    cin >> numberOfTerms;

     switch(numberOfTerms)
     {
     case 1:
          cout << "Fibonacci (1)  O"  << endl;
         break;
     case 2:
         cout << "Fibonacci (1) = 0"  <<endl;
         cout << "Fibonacci (2) = 1" << endl;
        break;
     default:
         prevTerm=0;
         nextTerm=1;
         for (int j = 2; j != numberOfTerms; j++)
             {    tempNum = nextTerm + prevTerm;
                  prevTerm = nextTerm;
                  nextTerm = tempNum;
                  cout  << "Fibonacci (" << j + 1 << ") = " << tempNum << endl;  }
     }

    return 0;
}
