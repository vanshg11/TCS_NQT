#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n)
{
    // calculating the number of digits in the given number
    int k = to_string(n).length();
    int sum = 0;
    // copying the value off the input number to a temporary variable
    int temp = n;
    while (temp > 0)
    {
        int lastdigit = temp % 10;
        sum += pow(lastdigit, k);
        temp = temp / 10;
    }
    return sum == n ? true : false;
}
int main()
{
    int n;
    cin >> n;
    cout << isArmstrong(n) << endl;

    return 0;
}
