#include <iostream>
using namespace std;

int main() {
	long long n,m;   cin>>n>>m;
	int count=0;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]%m==0){
	        count++;
	    }
	}
	cout<<count;
}
