#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;cin>>n;
    	int x=1,y=3*n,z=1,sum=1,x1=1,y2=3*n,z2=1;
    	if(n==1){
    		cout<<1<<endl;
    		cout<<1<<" "<<2<<endl;
    		continue;
    	}
    	for(int i=0;i<n-1;i++){
    		if(x>=y){
    			break;
    		}
    		if(!(z%3)){
    			y--;
    			sum++;
    			x+=3;y--;z++;
    		}
    		else{
    			sum++;
    			x+=3;y--;z++;
    		}
    		
 		}
    	cout<<sum-1<<endl;
    	for(int i=0;i<n-1;i++){
    		if(x1>=y2){
    			break;
    		}
    		if(!(z2%3)){
    			y2--;
    			cout<<x1<<" "<<y2<<endl;
    			x1+=3;y2--;z2++;
    		}
    		else{
    			cout<<x1<<" "<<y2<<endl;
    			x1+=3;y2--;z2++;
    		}
    		
 		} 
    }
    return 0;
}
