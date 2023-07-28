#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        double x;
        cin >> x;

        double correct = x/3.0;
        int incorrect = (ceil(correct) * 3) - x;

        cout  << incorrect << endl;
    }
    return 0;
}
