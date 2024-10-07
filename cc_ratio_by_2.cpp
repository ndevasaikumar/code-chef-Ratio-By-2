#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x ,y;
	    cin >> x >> y;
	    int a = max(x,y);
	    int b = min(x,y);
	    int cnt = 0;
	    while(true){
	        if(a >= 2 * b)
	            break;
	        b--;
	        cnt++;
	    }
	    cout << cnt << endl;
	    
	}

}
