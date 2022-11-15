/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  char a; cin>>a;
  string s; cin>>s;
  string z="qwertyuiopasdfghjkl;zxcvbnm,./";
  int r=1;
  if(a=='R'){
  	r=-1;
  }
  for(int i=0;i<s.size();i++){
  	for(int j=0;j<z.size();j++){
  		if(s[i]==z[j]){
  			cout<<z[j+r];
  		}
  	}
  }
}
