#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	long long a,b; cin>>a>>b;
    	if(a==b){
    		cout<<0<<endl;
    	}
    	else if(a<b){
    		if((b-a)%2!=0){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<2<<endl;
    		}
    	}
    	else{
    		if((a-b)%2==0){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<2<<endl;
    		}
    	}
    }
}
