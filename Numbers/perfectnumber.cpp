#include <bits/stdc++.h>
using namespace std;
bool isperfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    if (isperfect(n))
    {
        cout << "Perfect Number" << endl;
    }
    else
    {
        cout << "Not a Perfect Number" << endl;
    }
    return 0;
}