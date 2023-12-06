#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; ++i)
    {
        int A, B;
        scanf("%d %d", &A, &B);

        int temp = B;

        if (A % B == 0)
        {
            printf("%d\n", A % B);
        }
        else
        {
            while (true)
            {
                A++;
                B--;
                if(A%B==0){
                    printf("%d\n", temp - B);
                    break;
                }
            }
        }
    }

    return 0;
}
