#include <bits/stdc++.h>
using namespace std;
string removecharactersexceptalphabets(string str, int n)
{
    string ans;
    for (int i = 0; i < n; i++)
    {
        int ascii = (int)str[i];
        if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
        {
            ans.push_back(str[i]);
        }
    }
    return ans;
}
int main()
{
    string str;
    getline(cin, str);

    int n = str.length();
    cout << removecharactersexceptalphabets(str, n) << endl;

    return 0;
}