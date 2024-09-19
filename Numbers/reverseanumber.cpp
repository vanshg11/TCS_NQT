#include <bits/stdc++.h>
using namespace std;
int reverseanumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    cout << reverseanumber(n) << endl;
    return 0;
}