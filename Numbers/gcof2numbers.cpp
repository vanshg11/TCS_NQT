#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        a = a % b;
        swap(a, b); // Swap to ensure 'a' becomes the greater value
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << ans << endl;
    int lcm = (a * b) / ans;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;

    return 0;
}
