#include<bits/stdc++.h>
using namespace std;
 
int main(){
       int n,sum=0,r=0,count=0; cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
       		cin>>a[i];
       		sum+=a[i];
       }
       sort(a,a+n);
       for(int i=n-1;i>=0;i--){
       		r+=a[i];
       		sum-=a[i];
       		count++;
       		if(r>sum){
       			break;
       		}
       }
       cout<<count<<endl;
       		
       
}
