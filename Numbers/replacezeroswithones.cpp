#include <bits/stdc++.h>
using namespace std;

int replacezeroswithones(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = 0, tmp = 1;
    while (n > 0)
    {
        int d = n % 10;
        if (d == 0)
        {
            d = 1;
        }
        ans = d * tmp + ans;
        n /= 10;
        tmp *= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << replacezeroswithones(n) << endl;
    return 0;
}