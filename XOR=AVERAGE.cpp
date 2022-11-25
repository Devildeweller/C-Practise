/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/
 
#include <bits/stdc++.h>
using namespace std;
 
void solve(int n){
	if(n%2){
		for(int i=0;i<n;i++){
			cout<<7<<" ";
		}
		cout<<"\n";
    }
    else{
    	for(int i=0;i<n-2;i++){
    		cout<<2<<" ";
    	}
    	cout<<1<<" "<<3<<"\n";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        solve(n);
    }
    
    return 0;
}
