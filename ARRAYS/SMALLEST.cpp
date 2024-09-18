#include <bits/stdc++.h>
using namespace std;

int smallestinarray(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[0];
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
    cout << smallestinarray(arr, n) << endl;

    return 0;
}