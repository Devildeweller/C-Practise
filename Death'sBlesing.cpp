#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,max_spell=0,sum=0,input; cin>>n;
        for(int i=0;i<n;i++){
        	cin>>input;
        	sum+=input;
        }
        for(int i=0;i<n;i++){
        	cin>>input;
        	sum+=input;
        	if(max_spell<input){
        		max_spell=input;
        	}
        }
        cout<<sum-max_spell<<endl;



    }
    
    return 0;
}
