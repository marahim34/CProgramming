#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // cout << a << endl
    //      << b << endl;

    int n = b - a;
    // cout << n << endl;

    for (int i = a; i <= b; i++)
    {
        if (i == 1)
        {
            cout << "one" << endl;
            continue;
        }

        else if (i == 2)
        {
            cout << "two" << endl;
            continue;
        }

        else if (i == 3)
        {
            cout << "three" << endl;
            continue;
        }

        else if (i == 4)
        {
            cout << "four" << endl;
            continue;
        }

        else if (i == 5)
        {
            cout << "five" << endl;
            continue;
        }

        else if (i == 6)
        {
            cout << "six" << endl;
            continue;
        }

        else if (i == 7)
        {
            cout << "seven" << endl;
            continue;
        }

        else if (i == 8)
        {
            cout << "eight" << endl;
            continue;
        }

        else if (i == 9)
        {

            cout << "nine" << endl;
            continue;
        }
        else if (i > 9 && i % 2 == 0)
        {
            cout << "even" << endl;
            continue;
        }

        else if (i > 9 && i % 2 != 0)
        {
            cout << "odd" << endl;
        }
    }

    if (n <= 9)
    {
    }

    return 0;
}