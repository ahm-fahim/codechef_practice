#include <iostream>
using namespace std;

int main()
{
    int t, x, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> n;

        if (x <= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
