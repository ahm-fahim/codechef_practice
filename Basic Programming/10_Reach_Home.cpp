#include <iostream>
using namespace std;

int main() {
    int t, x, y;

    cin >> t;

    while(t){
        cin >> x >> y;

        if(x * 5 >= y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

        t--;
    }
    return 0;
}
