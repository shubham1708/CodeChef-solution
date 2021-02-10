//Shubham yadav
//Codechef feburary long challange 2021 solutions
//Team name 
//Problem Code : TEAMNAME


#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int common_elems(vector<char>v1,vector<char>v2){
    set<char> s(v1.begin(),v1.end());
    int res=0;
    for(auto x:v2){
        if(s.find(x)!=s.end()){
            res++;
        }
    }
    return res;
}
int main(){
    int t;; cin>>t;    while(t--){
        int n;  cin>>n;
        map<string,vector<char> >m;
        map<string,vector<char> > :: iterator i1,j1;
        
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s.length()>0){
                m[s.substr(1)].push_back(s[0]);
                
            }
            
        }
        int res=0;
        for(auto i : m){
            for(auto j : m){
                if(i.first!=j.first){
                    int c=common_elems(i.second,j.second);
                    res+=(i.second.size()-c)*(j.second.size()-c);
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
