#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long revenue(long long a[],long long n){
    
    sort(a, a+n);
    long long ans=a[0];
    for(long long i=0;i<n;i++){
        ans=max(ans,a[i]*(n-i));
    } 
      cout<<ans;
    
}
int main(){
   long long n;  cin>>n;
   long long a[n];
   for(long long i=0;i<n;i++){
       cin>>a[i];
   }revenue( a, n);
   
}
