#include <bits/stdc++.h>
using namespace std;

bool isautomorphic(int n)
{
    int square = n * n;
    while (n > 0)
    {
        if (n % 10 != square % 10)
            return false;
        n /= 10;
        square /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (isautomorphic(n))
    {
        cout << "Automorphic Number" << endl;
    }
    else
    {
        cout << "Not an Automorphic Number" << endl;
    }
    return 0;
}