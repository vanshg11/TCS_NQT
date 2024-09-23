#include <bits/stdc++.h>
using namespace std;

int getsum(int n)
{
    int d, sum = 0;
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << getsum(n) << endl;
    return 0;
}