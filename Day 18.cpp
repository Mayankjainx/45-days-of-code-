#include <iostream>

using namespace std;



int main() {

	  int T, N, A, B;

	  cin>>T;

	  while(T--){

	      cin>>N>>A>>B;

	      int I=0, J=0, X;

	      while(N/2!=1){

	          N=N/2;

	          I=I+A;

	          J=J+B;

	      }

	      cout<<I+J+A<<endl;

	  }

	  return 0;

}
