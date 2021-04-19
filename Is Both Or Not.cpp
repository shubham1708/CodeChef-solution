#include <iostream>
using namespace std;


void divide(int N){
    if(N%5==0 && N%11==0){
        cout<<"BOTH"<<endl;
    }else if(N%5==0 || N%11==0){
        cout<<"ONE"<<endl;
    }else{
        cout<<"NONE"<<endl;
    }
}
int main() {
	// your code goes here
	int N;
	cin>>N;
	divide(N);
}
