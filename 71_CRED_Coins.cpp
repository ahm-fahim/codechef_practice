#include <iostream>
using namespace std;

int main() {
	int t;

	cin >>t;

	while(t--){
	    // x = creed coins
	    // y = bills

	    int x, y;

	    cin >> x >> y;

	    int totalCoins = x*y;
	    int totalBags = totalCoins/100;

	    cout << totalBags << endl;

	}
	return 0;
}
