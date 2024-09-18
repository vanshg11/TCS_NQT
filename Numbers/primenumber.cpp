#include <bits/stdc++.h>
using namespace std;

bool checkprime(int n)
{
    if (n == 1)
        return false;
    int i = 2;
    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void printprimeinrange(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (checkprime(i))
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << "Prime numbers between " << a << " and " << b << " are: ";
    printprimeinrange(a, b);
    return 0;
}