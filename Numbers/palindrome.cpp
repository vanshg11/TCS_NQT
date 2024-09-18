// #include <bits/stdc++.h>
// using namespace std;
// bool ispalindrome(int n)
// {
//     int revnum = 0;
//     int dup = n;
//     while (n > 0)
//     {
//         int ld = n % 10;
//         revnum = revnum * 10 + ld;
//         n = n / 10;
//     }
//     if (dup == revnum)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     if (ispalindrome(n))
//     {
//         cout << "Palindrome Number" << endl;
//     }
//     else
//     {
//         cout << "Not a Palindrome Number" << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

bool ispalindromic(int n)
{
    int revnumber = 0;
    int temp = n;
    while (n > 0)
    {
        int num = n % 10;
        revnumber = revnumber * 10 + num;
        n = n / 10;
    }
    return temp == revnumber;
}

int main()
{
    int n;
    cin >> n;
    if (ispalindromic(n))
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not a Palindrome Number" << endl;

        return 0;
    }
}