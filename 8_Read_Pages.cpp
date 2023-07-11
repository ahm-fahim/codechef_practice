#include <iostream>
using namespace std;

int main() {
    int t, n, x, y;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> x >> y;

        if(x*y >= n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
