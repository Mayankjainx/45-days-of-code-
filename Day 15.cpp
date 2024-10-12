#include <iostream>

using namespace std;



int main() {

	 int T;

	 cin>>T;

	 while (T--){

	     int N, K, M, S;

	     cin>>N>>K>>M;

	     S=K*M;

	     if(N%S==0){

	         cout<<N/S<<endl;

	     }

	     else{

	         cout<<(N/S)+1<<endl;

	     }

	 }

	 return 0;

}
