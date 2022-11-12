/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  		int a[4];
  		for(int i=0;i<4;i++){
  			cin>>a[i];
  		}
  		string s; cin>>s;
  		int cal=0;
  		for(int i=0;i<s.size();i++){
  			int r=s[i]-'0';
  			cal+=a[r-1];
  		}
  		cout<<cal;
}
