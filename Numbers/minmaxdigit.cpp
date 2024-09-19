#include <bits/stdc++.h>
using namespace std;

void minmax(int n)
{
    int mini = INT_MAX, maxi = INT_MIN;
    while (n != 0)
    {
        int ld = n % 10;
        mini = min(mini, ld);
        maxi = max(maxi, ld);
        n = n / 10;
    }
    cout << "maximum digit is " << maxi << endl;
    cout << "minimum digit is " << mini << endl;
}
int main()
{
    int n;
    cin >> n;
    minmax(n);
    return 0;
}