#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n; cin>>n;
    	long long arr[n];
    	long long arr1[n];
    	long long count=0;
    	long long min=0,min2=0;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		if(!min){
    			min=arr[i];
    		}
    		else if(min>arr[i]){
    				min=arr[i];
    		}
    	}
    	for(int i=0;i<n;i++){
    		cin>>arr1[i];
    		if(!min2){
    			min2=arr1[i];
    		}
    		else if(min2>arr1[i]){
    				min2=arr1[i];
    		}
    	}
    	for(int i=0;i<n;i++){
    		long long temp=arr[i]-min;
    		long long temp1=arr1[i]-min2;
    		count+=max(temp,temp1);
    	}
    	cout<<count<<endl;
    }
}
