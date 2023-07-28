#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >>t;

    while(t--){
        double x, y;
        cin >> x >> y;

        if(y >= ceil(x/2) || x==y){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
