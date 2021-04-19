#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll n;  cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=n-1;i>=0;i--){
	    cout<<arr[i]<<" ";
	}
}
