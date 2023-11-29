#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; 
    scanf("%d", &T);

    while (T--)
    {
        int X, N; 
        scanf("%d %d", &X, &N);

        int planes_needed = (N / 100) + ((N % 100) ? 1 : 0);

        int additional_planes = planes_needed - X;

        printf("%d\n", (additional_planes > 0) ? additional_planes : 0);
    }

    return 0;
}