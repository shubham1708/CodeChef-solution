#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[100000],cnt=0;
	for(int i=0;i<100000;i++){
	    cin>>a[cnt];
	    cnt++;
	}
	for(int i=0;i<cnt;i++){
	    if(a[i]==42){
	        break;
	    }else{
	        cout<<a[i]<<endl;
	    }
	}
}
