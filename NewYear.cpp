/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  if(n<2020){
  	cout<<"NO\n";
  }
  else if (n%2020==0) {
    cout << "YES\n";
  }
  else if((n%2020)<=(n/2020)){
  	cout<<"YES\n";
  }
   else {
    cout << "NO\n";
  }
}
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
