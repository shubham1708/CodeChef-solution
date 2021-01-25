//codechef january cookoff 2021 solution
//Shubham yadav
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;  cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        char arr[a][b];
        for(int i=0;i<a;i++ ){
            for(int j=0;j<b;j++){
                cin>>arr[i][j];
            }
        }
        ll a1=0,a2=0;
        ll tot=a*b;
        for(int i=0;i<a;i++ ){
            for(int j=0;j<b;j++){
                 if((i+j)%2==0 && arr[i][j]=='.'){
                     a1++;
                 }if((i+j)%2==1 && arr[i][j]=='*'){
                     a1++;
                 }
            }
        }
        for(int i=0;i<a;i++ ){
            for(int j=0;j<b;j++){
                 if((i+j)%2==0 && arr[i][j]=='*'){
                     a2++;
                 }if((i+j)%2==1 && arr[i][j]=='.'){
                     a2++;
                 }
            }
        }
        if(tot%2==0){
        cout<<min(a1,a2)<<endl;
        }else{
            cout<<a1<<endl;
        }
    }
}
