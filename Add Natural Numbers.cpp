#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll n;  cin>>n;
	ll sum=0;
	for(int i=1;i<=n;i++){
	    sum+=i;
	}
	cout<<sum;
}
