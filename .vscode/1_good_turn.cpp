#include <iostream>
using namespace std;

int main() {
	int x,y,t;
	
	cin>> t;
	
	for(int i = 0; i < t; i++){
	    cin >> x >> y;
	    
	    if( x+y > 6){
	        cout << "YES\n"; 
	    }else{
	        cout << "NO\n";
	    }
	    
	}
	
	return 0;
}
