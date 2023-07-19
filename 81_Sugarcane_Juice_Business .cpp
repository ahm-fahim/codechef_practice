#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int totalSold = n*50;

        int totalProfit = totalSold - ((totalSold*20)/100) -((totalSold*20)/100) -((totalSold*30)/100);

        cout << totalProfit  << endl;
    }
    return 0;
}
