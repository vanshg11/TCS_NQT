#include <bits/stdc++.h>
using namespace std;

int secondsmallandsecondlarge(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[1];
    return arr[n - 1];
}
int andsecondlarge(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[n - 2];
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
    cout << secondsmallandsecondlarge(arr, n) << endl;
    cout << andsecondlarge(arr, n) << endl;
    return 0;
}