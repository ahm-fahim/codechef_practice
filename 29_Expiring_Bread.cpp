#include <iostream>
using namespace std;

int main() {
    /*
    n = number of bread     | 100   | 9 | 19
    m = expire days         | 100   | 2 | 6
    k = eat bread in a day  | 1     | 5 | 3
    */

    int t, n, m, k;

    cin >> t ;

    while(t){
        cin >> n >> m >> k;

        if( n <= m*k){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }

        t--;
    }

    return 0;
}
