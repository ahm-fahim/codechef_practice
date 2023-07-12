#include <iostream>
using namespace std;

int main() {
    int t, x, n;

    cin >> t;

    while(t){
        cin >> n >> x;

        if(x >= (n+1) / 2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

        t--;
    }
    return 0;
}
