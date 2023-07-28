#include <iostream>
using namespace std;

int main() {
    int t, x, y;

    cin >> t;

    while(t){
        cin >>x >> y;

        int profit = x-y;

        int incr = (x*10)/100;

        int currentPrice = x+incr;

        int totalProfit = currentPrice-profit;

        cout<< totalProfit << endl;

        t--;

    }

    return 0;
}
