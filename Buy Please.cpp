#include <iostream>
using namespace std;

void cost(int a,int b,int x,int y){
    
     cout<<a*x+b*y;
}

int main() {
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    cost(a,b,x,y);
}
