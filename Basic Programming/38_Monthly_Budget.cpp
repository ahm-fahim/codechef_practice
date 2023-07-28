#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int x, y;

        cin >> x >> y;

        if(y*30 <= x ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
