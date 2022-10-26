#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int count=0;

	for(int i=0;i<s.size();i++){
		for(int j=i+1;j<s.size();j++){
			if(s[i]==s[j]){
				s[j]=0;
			}
		}
		if(s[i]!=0){
			count++;
		}
	}
	if(count%2==0){
		cout<<"CHAT WITH HER!";
	}
	else{
		cout<<"IGNORE HIM!";
	}
}
