#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, k;
        scanf("%d %d %d", &n, &x, &k);

        int boy = x / k;
        int girl = (n - x) / k;

        int total_group = boy + girl;

        int rimBoy = x % k;
        int rimGirl = (n - x) % k;

        int girl_dance = min(rimBoy, rimGirl);

        int boy_red = rimBoy - girl_dance;

        int girl_red = rimGirl - girl_dance;

        int total_red = boy_red + girl_red;

        printf("%d\n", total_red);
    }

    return 0;
}
