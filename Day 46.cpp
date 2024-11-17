#include <iostream>

using namespace std;

int main() {

	

	int t=0;

	cin>>t;

	while(t--)

	{

	    int x=0,y=0,r=0;

	    cin>>x>>y>>r;

	    int sticks = ((r/30)+x);

	    int plates = ((r/30)+x)/y;

	    if(sticks%y==0)

	        cout<<plates<<endl;

	    else

	        cout<<plates+1<<endl;

	}

	return 0;

}
