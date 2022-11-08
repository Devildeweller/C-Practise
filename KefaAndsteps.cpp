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

    int n,c=0,g=0,m=0; cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    for(int i=0;i<n;i++){
    	if(m<=a[i]){
    		c++,g=max(g,c),m=a[i];
   		}
    	else{
    		if(a[i]<a[i+1]){
    			c=1;m=0;
    		}
    		else{
    	 	c=0,m=0;
    	 }
    	}
    }
    cout<<g;

    return 0;
}
