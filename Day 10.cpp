#include <bits/stdc++.h>
using namespace std;

int main() {
        int T;
        cin >> T;

        while(T--){
            int w,x,y,z;
            cin >> w >> x >> y >> z;

            if(x+y==w || y+z==w || z+x==w || x==w || y==w || z==w || x+y+z==w){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

}
