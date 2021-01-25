//codechef january cookoff 2021 div3 solution
#include<iostream>
#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;

int main(){
    ll t;  cin>>t;
    while(t--){
        ll l,r;  cin>>l>>r;
        if(l==r){
            cout<<1<<endl;
        }else{
            cout<<(((r-l-1)+2)*2)-1<<endl;
        }
    }
}
