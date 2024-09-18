#include <bits/stdc++.h>
using namespace std;

void findRepeatingElements(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());

    cout << "The repeating elements are: ";
    for (int i = 0; i < n; i++)
        if (arr[i] == arr[i + 1])
            cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    findRepeatingElements(arr, n);
    return 0;
}