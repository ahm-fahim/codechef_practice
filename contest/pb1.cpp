#include <bits/stdc++.h>
using namespace std;

int findMinimumXOR(int arr[], int n)
{
    int totalXOR = 0;
    for (int i = 0; i < n; ++i)
    {
        totalXOR ^= arr[i];
    }

    int minXOR = totalXOR;

    for (int i = 0; i < n; ++i)
    {
        int currentXOR = totalXOR ^ arr[i];
        minXOR = min(minXOR, currentXOR);
    }

    return minXOR;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[100000]; 
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int result = findMinimumXOR(arr, n);

        cout << result << "\n";
    }

    return 0;
}
