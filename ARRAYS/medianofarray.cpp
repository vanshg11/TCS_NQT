#include <bits/stdc++.h>
using namespace std;
int medianofarray(int arr[], int n)
{
    sort(arr, arr + n);
    if (n % 2 == 0)
        return (arr[n / 2] + arr[n / 2 - 1]) / 2;
    else
        return arr[n / 2];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << medianofarray(arr, n) << endl;
    return 0;
}