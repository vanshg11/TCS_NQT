#include <bits/stdc++.h>
using namespace std;
float apsum(float a, float d, int n)
{
    float sum = (n / 2.0) * (2 * a + (n - 1) * d);
    return sum;
}
int main()
{
    float a, d, n;
    cin >> a >> d >> n;
    cout << apsum(a, d, n) << endl;
    return 0;
}