#include<bits/stdc++.h>
using namespace std;
 
int main(){
       string s; cin>>s;
       int a=0,b=0,r=0;
       for(int i=0;i<s.size();i++){
       		if(s[i]=='0'){
       			a++;
       			r=max(r,a);
       		}
       		else{
       			a=0;
       		}
       		if(s[i]=='1'){
       			b++;
       			r=max(r,b);
       		}
       		else{
       			b=0;
       		}
       	}
       	if(r>=7){
       		cout<<"YES"<<endl;
       	}
       	else{
       		cout<<"NO"<<endl;
       	}
}
