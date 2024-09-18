#include <bits/stdc++.h>
using namespace std;
void rearrange(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rearrange(arr, n);

    return 0;
}