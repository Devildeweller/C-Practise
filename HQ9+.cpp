#include<bits/stdc++.h>
using namespace std;
 
int main(){
		string s; cin>>s;
		int c=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='H'){
				c++;
				break;
			}
			else if(s[i]=='Q'){
				c++;
				break;
			}
			else if(s[i]=='9'){
				c++;
				break;
			}
		}
		if(c){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

}
