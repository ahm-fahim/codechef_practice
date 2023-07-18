#include <iostream>
using namespace std;

int main() {
    int n;
    int even = 0;
    int odd = 0;

    cin >>n ;

    while(n--){
        int a;
        cin>>a;

        if(a%2 == 0){
            even += 1;
        }else{
            odd += 1;
        }

    }

    if(even > odd){
        cout << "READY FOR BATTLE\n";
    }else{
        cout << "NOT READY\n";
    }

    return 0;
}
