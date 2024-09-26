#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(int i, string& s)
{
    if (i >= s.length() / 2)
        return true;
    if (s[i] != s[s.length() - i - 1])
        return false;
    return ispalindrome(i + 1, s);
}

int main()
{
    string s = "madam";
    cout << ispalindrome(0, s) << endl;

    return 0;
}