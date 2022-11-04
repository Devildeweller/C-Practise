#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n; cin>>n;
    	if(!(n%2))
    		for(int i=n;i>=1;i--){
    			cout<<i<<" ";
    		}
    	else{
    		for(int i=n;i>=1;i--){
    			if(i==n/2+1){
    				cout<<i-1<<" ";
    				cout<<i<<" ";
    				i--;
    			}
    			else{
    				cout<<i<<" ";
    			}
    		}
    	}
    	cout<<endl;
    }
    return 0;
}
