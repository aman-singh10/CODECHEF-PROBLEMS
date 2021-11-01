#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if(a+b<=d && c<=e){
	        cout<<"YES"<<"\n";
	        
	    }
	    else if(a+c<=d && b<=e){
	        cout<<"YES"<<"\n";
	    }
	    else if(b+c<=d && a<=e){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
