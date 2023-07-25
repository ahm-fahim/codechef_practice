#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){

        string n;
        cin >> n;

        string rev = string(n.rbegin(), n.rend());

        if(n == rev ){
            cout << "wins\n";
        }else{
            cout << "loses\n";
        }
    }
    return 0;
}
