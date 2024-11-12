#include <bits/stdc++.h>

using namespace std;

int main() {

	int t,x,y;

	cin>>t;

	while(t--){

	    cin>>x>>y;

	    if((y*2)<=x)

	    cout<<(x/(2*y))<<endl;

	    else

	     cout<<"0"<<endl;

	}

	return 0;

}
