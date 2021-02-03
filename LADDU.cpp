//Shubham yadav
#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
	while(t--){
	    int act;
	    string s;
	    cin>>act>>s;
	    int can=200;
	    if(s=="NON_INDIAN"){
	        can=400;
	    }
	    int laddu=0;
	    for(int i=1;i<=act;i++){
	       string s1;  cin>>s1;
	       if(s1=="TOP_CONTRIBUTOR"){
	           laddu+=300;
	       }if(s1=="CONTEST_WON"){
	           int r;  cin>>r;
	           laddu+=300;
	           if(r<20){
	               laddu+=20-r;
	               
	           }
	       }if(s1=="CONTEST_HOSTED"){
	           laddu+=50;
	       }if(s1=="BUG_FOUND"){
	           int sev;  cin>>sev;
	           laddu+=sev;
	       }
	      
	    }int count=0;
	    if(s=="INDIAN"){
	    cout<<laddu/200<<endl;
	    }else{
	        cout<<laddu/400<<endl;
	    }
	}
	
}
