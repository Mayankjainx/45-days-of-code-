#include <iostream>

using namespace std;



int main() {

    int t;

    cin>>t;

    while(t--){

        int n, x, y;

        cin>>n>>x>>y;

        if(n*0==y){

        cout<<"yes"<<endl;

        }

        else if(x>0 && n*x==y){

        cout<<"yes"<<endl;

        }

        else if(x>0 && y%x==0){

        cout<<"yes"<<endl;

        }

        else{

        cout<<"no"<<endl;

        }

    }

    return 0;

}
