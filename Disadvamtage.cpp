/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	b[i]=a[i];
        }
        sort(b,b+n);
        for(int i=0;i<n;i++){
        	if(b[n-1]==a[i]){
        		cout<<a[i]-b[n-2]<<" ";
        	}
        	else{
        		cout<<a[i]-b[n-1]<<" ";
        	}
        }
        cout<<"\n";
 
    }
    
    return 0;
}
