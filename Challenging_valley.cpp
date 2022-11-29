#include <bits/stdc++.h>
using namespace std;
 #define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
        	cin>>a[i];
        }
        ll c=0;
        ll j=0;
        for(int i=0;i<n;i++){
        	if(a[i]!=a[i+1]){
        		if(j==0 || a[j-1]>a[j]){
        			if(i==n-1 || (a[i]<a[i+1])){
        				//cout<<i;
        				c++;
        			}
        		}
        		j=i+1;
        	}
        }
        if(c==1){
        	cout<<"YES\n";
        }
        else{
        	cout<<"NO\n";
        }
    }
    
    return 0;
}
