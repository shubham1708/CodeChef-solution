#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll n;  cin>>n;
	int space=n-1,star=1;
	for(int i=1;i<=n;i++){
	    for(int j=1;j<=space;j++){
	        cout<<" ";
	    }for(int j=1;j<=star;j++){
	        cout<<"*";
	    }
	    space--,star++;
	    cout<<endl;
	}
}
