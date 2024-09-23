#include <bits/stdc++.h>
using namespace std;
int getsum(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << getsum(a, b) << endl;
    return 0;
}