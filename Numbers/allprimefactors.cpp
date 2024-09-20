#include <bits/stdc++.h>
using namespace std;
vector<int> getprimefactors(int n)
{
    vector<int> primefactors;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            primefactors.push_back(i);
        }
        while (n % i == 0)
        {
            n = n / i;
        }
    }
    return primefactors;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = getprimefactors(n);
    for (auto factor : ans)
    {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}