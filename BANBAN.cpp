#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
       int n,i,j;
       cin>>n;
       
       
       
       if(n%2){
           cout<<n/2+1<<endl;
       }else{
           cout<<n/2<<endl;
       }
       
       i = 1,j = 3*n;
       
       while(n>0){
           cout<<i<<' '<<j<<endl;
           i+=3;
           j-=3;
           n-=2;
       }
      
    }
    
    return 0 ;
}
