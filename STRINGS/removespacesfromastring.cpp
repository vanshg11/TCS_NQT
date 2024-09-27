// #include <bits/stdc++.h>
// using namespace std;
// int solve(string A)
// {
//     long int n = A.size();     // Line 1
//     long int mod = 1000000007; // Line 2

//     int vowel = 0, cons = 0; // Line 3
//     for (int i = 0; i < n; i++)
//     { // Line 4
//         if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
//             vowel++; // Line 5
//         else
//             cons++; // Line 6
//     }
//     return (vowel * cons) % mod; // Line 7
// }
// int main()
// {
//     string A;
//     cin >> A;
//     cout << solve(A) << endl;
// }
#include <iostream>

using namespace std;

string removeSpaces(char str[])
{
    int count = 0; // spaces seen so far

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
        {                        // if whitespace is present
            str[count] = str[i]; // remove whitespace
            count++;             // increment the count
        }

    str[count] = '\0';

    return str;
}

int main()
{
    char str[] = "Vansh Gupta is a very good boy";
    cout << removeSpaces(str);

    return 0;
}