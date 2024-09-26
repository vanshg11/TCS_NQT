#include <bits/stdc++.h>
using namespace std;
int solve(string str, int length)
{
    int vowels = 0;
    int consonantants = 0;
    int whitespaces = 0;
    for (int i = 0; i <= length; i++)
    {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == '0' || str[i] == 'u')
        {
            vowels++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            consonantants++;
        }
        else if (str[i] == ' ')
        {
            whitespaces++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonantants << endl;
    cout << "White Spaces: " << whitespaces << endl;
}
int main()
{
    string str;
    int length = str.length();
    cout << "Enter a string: ";
    for (int i = 0; i <= length; i++)
    {
        cin >> str[i];
    }
    solve(str, length);

    return 0;
}