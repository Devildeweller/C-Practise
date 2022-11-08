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
 
    int n,p; cin>>n>>p;
    int a[p];
 
    for(int i=0;i<p;i++){
    	cin>>a[i];
    }
    sort(a,a+p);
    int m=a[p-1];
   	for(int i=0;i<=p-n+1;i++){
   		int a1=a[i+n-1]-a[i];
   		if(min(m,a1)>=0){
   			m=min(m,a1);
   		}
   	}
   	cout<<m;
    return 0;
}
