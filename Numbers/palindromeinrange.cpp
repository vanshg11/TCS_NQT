// #include <bits/stdc++.h>
// using namespace std;

// bool ispalindromic(int n)
// {
//     int reverse = 0;
//     int temp = n;
//     while (temp > 0)
//     {
//         reverse = reverse * 10 + temp % 10;
//         temp = temp / 10;
//     }
//     return n == reverse;
// }

// int main()
// {
//     int min = 100;
//     int max = 150;
//     for (int i = min; i <= max; i++)
//     {
//         if (ispalindromic(i))
//         {
//             cout << i << " ";
//         }
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
    // int n;
    // cin >> n;
    int min;
    cin >> min;
    int max;
    cin >> max;
    for (int i = min; i <= max; i++)
    {
        if (ispalindromic(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}