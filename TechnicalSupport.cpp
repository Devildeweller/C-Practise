#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
       int n; cin>>n; bool r=true;
       char arr[n];
       for(int i=0;i<n;i++){
       		cin>>arr[i];
       }
       for(int i=0;i<n;i++){
       		if(arr[i]=='0'){
       			continue;
       		}
       		if(arr[i]=='Q'){
       			for(int j=i;j<n;j++){
       				if(arr[j]=='A'){
       					arr[j]='0';
       					r=true;
       					break;
       				}
       				else{
       					r=false;
       				}
       			}
       		}
       }
       if(r){
       		cout<<"YES"<<endl;
       }
       else{
       		cout<<"NO"<<endl;
       }
    
    }
}
