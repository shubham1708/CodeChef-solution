#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	int count=0;
	for(int i=0;i<n;i++){
	    if(arr[i]==k){
	        count=1;
	        cout<<1<<endl;
	        break;
	    }
	}
	if(count==0){
	    cout<<-1<<endl;
	}
}
