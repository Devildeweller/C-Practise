#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;cin>>n;
    	int x=1,y=3*n,z=1;
    	if(n==1){
    		cout<<1<<endl;
    		cout<<1<<" "<<2<<endl;
    		continue;
    		}
    	cout<<n-1<<endl;
    	for(int i=0;i<n-1;i++){
    		if(!(z%3)){
    			y--;
    			cout<<x<<" "<<y<<endl;
    			x+=3;y--;z++;
    		}
    		else{
    			cout<<x<<" "<<y<<endl;
    			x+=3;y--;z++;
    		}
    		
 		} 
    }
    return 0;
}
