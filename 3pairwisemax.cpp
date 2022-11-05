#include<iostream>
#include<cmath>
using namespace std;


  

int main(){
   
  int t;
  cin>>t;
  
  while(t--){
      
      long long x,y,z;
      cin>>x>>y>>z;
      
      if(x==y && y==z){
      	  cout<<"YES"<<endl;
          cout<<x<<" "<<x<<" "<<x<<endl;
      }else
      
      if(x==y && z<x){
      	  cout<<"YES"<<endl;
          cout<<x<<" "<<z<<" "<< ((z>1)? z-1:1)<<endl;
      }else if(x==z && y<x){
      	  cout<<"YES"<<endl;
          cout<<x<<" "<<y<<" "<< ((y>1)? y-1:1)<<endl;
      }else if(y==z && x<z) {
      	  cout<<"YES"<<endl;
          cout<<z<<" "<<x<<" "<< ((x>1)? x-1:1)<<endl;
      }else{
          cout<<"NO"<<endl;
      }
      
  }
   
   
    return 0;
}
