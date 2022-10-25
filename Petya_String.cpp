#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int c=0;
	transform(a.begin(),a.end(),a.begin(), ::tolower);
	transform(b.begin(),b.end(),b.begin(), ::tolower);
	for(int i=0;i<a.size();i++){
		if(a[i]<b[i]){
			cout<<-1;
			c++;
			break;
		}
		if(a[i]>b[i]){
			cout<<1;
			c++;
			break;
		}
	}
	if(c==0){
		cout<<0;
	}
}
