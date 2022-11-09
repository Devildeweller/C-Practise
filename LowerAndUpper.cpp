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

 	string s1; cin>>s1;
 	int l=0,u=0;
 	for(int i=0;i<s1.size();i++){
 		if((int)s1[i]<91){
 			u++;
 		}
 		else{
 			l++;
 		}
 	}
 	if(l>=u){
 		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
 	}
 	else{
 		transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 	}
 	cout<<s1;
    return 0;
}
