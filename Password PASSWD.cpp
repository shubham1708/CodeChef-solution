//codechef january cookoff 2021 div3
#include <iostream>
using namespace std;

int main() {
    int t;  cin>>t;
    while(t--){
        string s;  cin>>s;
        string ans="NO";
        if(s.length()<10){
            cout<<ans<<endl;
        }else{
            int sp=0,u=0,n=0,l=0;
            for(int i=0;i<s.length();i++){
                if(islower(s[i])){
                    l=1;
                }if(isupper(s[i]) && (i>0 && i<s.length()-1)){
                    u=1;
                }if((s[i]=='#' || s[i]=='&' || s[i]=='?' || s[i]=='@' || s[i]=='%') && (i>0 && i<s.length()-1)){
                    sp=1;
                }if((i>0 && i<s.length()-1) && (isdigit(s[i]))){
                    n=1;
                }if(sp==1 && l==1 && u==1 && n==1){
                    ans="YES";
                    break;
                }
            }cout<<ans<<endl;
        }
    }
}
