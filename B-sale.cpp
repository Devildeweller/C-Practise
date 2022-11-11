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

    int n,m; cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    for(int j=0;j<m;j++){
    	if(a[j]<0){
    		sum+=a[j];
    	}  	
    }
    cout<<abs(sum);
}
