/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;
# define ll long long 

const ll mod=1000000007;

int n=1000001;
ll arr[1000001];

int main() {
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<n;i++){
	    arr[i]=(i*arr[i-1])%mod;
    }
    
	int t; cin>>t;
	
	while(t--){
	    int r; cin>>r;
	    
	    ll b[r];
	    ll moon=0;
		map <ll,ll>mp;
		
	    for(int i=0;i<r;i++){
    	    cin>>b[i];
    		mp[b[i]]++;
	    }
	    
		for (auto i = mp.begin(); i != mp.end(); i++){
    		ll number=(*i).first;
    		ll times=(*i).second;

		    moon=(moon+(times*arr[number])%mod)%mod;
        }
        
	    cout<<moon%mod<<endl;
	}
	
	return 0;
}
