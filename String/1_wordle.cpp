#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string s, t;

        cin >> s >> t;

        string m;

        for(int i = 0; i < 5; i++){
            if(s[i]!=t[i]){
                m.append("B");
            }else{
                m.append("G");
            }

        }
        cout <<m<< endl;


    }
    return 0;
}
