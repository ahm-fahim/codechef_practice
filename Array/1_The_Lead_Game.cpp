#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int score1 = 0, score2 = 0;
    int mx_lead = 0, win= 0;

    while(t--){
        int pl1, pl2;
        cin >> pl1 >> pl2;

        score1 += pl1;
        score2 += pl2;

        int lead = abs(pl1 - pl2);

        if(lead > mx_lead){
            mx_lead = lead;
            win = (score1 > score2)? 1: 2;
        }
    }
    cout << win << " " << mx_lead << endl;

    return 0;
}

