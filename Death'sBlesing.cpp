#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,max_spell=0,sum=0; cin>>n;
        long long arr[n];
        long long arr1[n];
        for(int i=0;i<n;i++){
        	cin>>arr[i];
        	sum+=arr[i];
        }
        for(int i=0;i<n;i++){
        	cin>>arr1[i];
        	sum+=arr1[i];
        	if(max_spell<arr1[i]){
        		max_spell=arr1[i];
        	}
        }
        cout<<sum-max_spell<<endl;



    }
    
    return 0;
}
