//codechef learnDSA solution by shubham yadav
#include <iostream>
#define ll long long
using namespace std;

int main() {
	    ll t;  cin>>t;
	    while(t--){
	        ll n;  cin>>n;
	        ll temp=0;
	        while(n){
	            temp+=(n/5);
	            n=n/5;
	            
	        }
	        cout<<temp<<endl;
	   
	 }
}
