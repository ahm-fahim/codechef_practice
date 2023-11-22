#include <bits/stdc++.h>
using namespace std;

int findN(int X, int Y)
{
    int N = abs(X - Y) + X + Y;

    if (N % 2 == 0)
    {
        N--;
    }

    return N;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        int result = findN(X, Y);

        cout << result << endl;
    }

    return 0;
}
