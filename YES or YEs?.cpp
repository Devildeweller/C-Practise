#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{	

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		transform(s.begin(),s.end(),s.begin(),::tolower);
		if(s[0]=='y' && s[1]=='e' && s[2]=='s'){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
