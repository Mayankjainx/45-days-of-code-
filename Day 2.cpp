#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
int N, X;
cin>>N>>X;
if (N%6==0){
cout<<N*X/6<<endl;
}
else{
cout<<(N/6+1)*X<<endl;
    }
}
return 0
}
