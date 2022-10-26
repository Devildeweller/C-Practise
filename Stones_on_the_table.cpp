#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n;
	string s;
	cin>>n>>s;
	
	int count=0;

	for(int i=0;i<n;i++){
		if(s[i]==s[i+1]){
			count++;
			}
	}
	if(count%2==0){
		cout<<count;
	}
	else{
		cout<<count;
	}
}
