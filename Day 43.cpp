#include <bits/stdc++.h>

using namespace std;

int main() {



	int t;

	cin>>t;

	

	while(t--) {

	    int n, x, p, a;

	    cin>>n>>x>>p;

	    a = 3*x - (n-x);

	    

	    if (a >= p) cout<<"Pass";

	    else cout<<"Fail";

	    cout<<endl;

	}

	return 0;

}
