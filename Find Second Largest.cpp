#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll a,b,c;
	cin>>a>>b>>c;
	ll maxi=max(a,max(b,c));
	ll mini=min(a,min(b,c));
	if(a!=mini && a!=maxi){
	    cout<<a;
	}else if(b!=mini && b!=maxi){
	    cout<<b;
	}else{
	    cout<<c;
	}
}
