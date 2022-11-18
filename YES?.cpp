/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		if(s.size()<2 && (s[0]=='e' || s[0]=='Y' || s[0]=='s')){
			cout<<"YES\n";
			continue;
		}
		else if(s.size()<2){
			cout<<"NO\n";
			continue;
		}
		bool r=true;
		for(int i=0;i<s.size()-1;i++){
			if((s[i]=='Y' && s[i+1]=='e') || (s[i]=='e' && s[i+1]=='s') || (s[i]=='s' && s[i+1]=='Y')){

			}
			else{
				r=false;
				break;
			}
		}
		if(r){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}
}
