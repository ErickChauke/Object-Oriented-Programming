#include <iostream>

using namespace std;

int main()
{
    unsigned long a, b, c, n;

    cout << "How many Fibonacci numbers do you want to print?" << endl;
    cin >> n;

    if (n == 1 )
    { cout << "Fibonacci (1)  O"  << endl; }
    else if (n == 2 )
    { cout << "Fibonacci (1) = 0"  <<endl;
      cout << "Fibonacci (2) = 1" << endl;
    }
    else
    {
        cout <<"Fibonacci (1) = 0"  <<endl;
        cout << "Fibonacci (2) = 1" <<endl;
        //using an iterative approach for calculation the n_th number
        // in the series
        a = 0;
        b = 1;
        int j = 2;
        for (; j != n; j++)
        {
            c = b + a;
            a = b;
            b = c;
            cout  << "Fibonacci (" << j + 1 << ") = " << c << endl;
        }
     }

    return 0;
}
