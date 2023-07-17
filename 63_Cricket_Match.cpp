#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        /*
            n = the number of runs required
            m = the number of overs
        */

        int n, m;

        cin >> n >> m;

        int balls = m *6;
        int total_runs = balls*6;

        if(total_runs >= n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}
