#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int arr[n];
    	bool a=true;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	for(int i=1;i<n-2;i++){
    		if(arr[i]%2==0 && arr[i+2]%2==0){}
    		else if(arr[i]%2!=0 && arr[i+2]%2!=0){}
    		else{
    			a=false;
    		}
    		i++;
    	}
    	for(int i=0;i<n-2;i++){
    		if(arr[i]%2==0 && arr[i+2]%2==0){}
    		else if(arr[i]%2!=0 && arr[i+2]%2!=0){}
    		else{
    			a=false;
    		}
    		i++;
    	}
    	if(a){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
    return 0;
}
