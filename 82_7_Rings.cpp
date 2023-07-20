#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int digitCount = n * x;

        int count = 0;
        while (digitCount != 0)
        {
            digitCount = digitCount / 10;
            ++count;
        }

        if (count == 5)
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
