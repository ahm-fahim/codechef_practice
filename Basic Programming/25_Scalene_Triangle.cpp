#include <iostream>
using namespace std;

int main() {
    int t, a, b, c;

    cin >> t;

    while(t){
        cin >> a >> b >> c;

        if( a<b && a<c && b<c ){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        t--;
    }
    return 0;
}
