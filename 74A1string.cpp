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
        int arr[n];
        for(int i=0;i<n;i++){
        	cin>>arr[i];
        }
        string s; cin>>s;
        bool r=true;
        for(int i=0;i<n;i++){
        	for(int j=i;j<n;j++){
        		if(arr[i]==arr[j]){
        			if(s[i]==s[j]){continue;}
        			else{
        				r=false;
        				break;
        			}
        		}
        	}
        }
        if(r){
        	cout<<"YES\n";
        }
        else{
        	cout<<"NO\n";
        }

    }
    
    return 0;
}
