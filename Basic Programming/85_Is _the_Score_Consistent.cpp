#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int a, b;
        int c, d;

        cin >> a >> b;
        cin >> c >> d;

        if (a<=c && b <= d){
            cout << "POSSIBLE\n";
        }else{
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}
