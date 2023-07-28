#include <iostream>
using namespace std;

int main() {
    int t, x, y;

    cin>> t;

    while(t){
        cin >> x >> y;

        if(x > 0 && y > 0 && x==y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
        t--;
    }
    return 0;
}
