#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int strLength;
        cin >> strLength;

        string s;
        cin>>s;
        s = s.substr(0,strLength);

        int strSize = s.size();
        string l = s.substr(0,strSize/2);
        string r = s.substr(strSize/2);

        if(l==r){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
