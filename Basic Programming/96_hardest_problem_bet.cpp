#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if (a < b && a < c)
        {
            cout << "Draw\n";
        }
        else if (c < a && c < b)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }

    return 0;
}