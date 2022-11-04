#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n,m; cin>>n>>m;
    	if(!(n%2)){
    		cout<<m*(n/2)<<endl;
    	}
    	else if(!(m%2)){
    		cout<<n*(m/2)<<endl;
    	}
    	else{
    		cout<<((n-1)/2)*m+(m/2+1)<<endl;
    	}
    }
    return 0;
}
