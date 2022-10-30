#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int x=a.size()/2;
		string r = a.substr(0,x);
		string r1 = a.substr(x, x);
		if(a.size()==1 || a.size()%2!=0){
			cout<<"NO"<<endl;
		}
		else if(r==r1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	

	return 0;
}
