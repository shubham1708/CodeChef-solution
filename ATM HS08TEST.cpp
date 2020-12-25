#include <iostream>
using namespace std;

int main() {
	int n;   cin>>n;
	float m;  cin>>m;
	if(n+0.5<=m && n%5==0){
	   cout<<m-n-(0.5); 
	}else{
	    cout<<m;
	}
	
}
