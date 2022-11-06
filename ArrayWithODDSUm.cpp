#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,input,sum=0; cin>>n; bool c=false,d=false;
        for(int i=0;i<n;i++){
        	cin>>input;
        	sum+=input;      
        	if(input%2){
        		c=true;
        	}
        	else{
        		d=true;
        	}
        }
        if(sum%2){
        	cout<<"YES"<<endl;
        }
   		else if(!(sum%2) && c && d){
   			cout<<"YES"<<endl;
   		}
        else{
        	cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
