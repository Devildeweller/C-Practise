#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	long long n,m; cin>>n>>m;
    	if(n==1){
    		cout<<0<<endl;
    	}
    	else if(n==2){
    		cout<<m<<endl;
    	}
    	else if(n==3){
    		cout<<2*m<<endl;
    	}
    	else{
    		if(m%2==0){
    			cout<<4*(m/2)<<endl;
    		}
    		else{
    			cout<<2*(m/2)+2*(m/2+1)<<endl;
    		}
    	}
    }
}
