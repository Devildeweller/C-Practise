#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	if(s.size()>1)
	{
		int arr1[(s.size()/2)+1];
		int j=0;
		for(int i=0;i<s.size();i++){
		if(s[i]=='+'){
		}
		else{
			arr1[j]=s[i];
			j++;
		}
		}
		int n=sizeof(arr1)/sizeof(arr1[0]);
		sort(arr1,arr1+n);
		for(int i=0;i<n-1;i++){
			cout<<arr1[i]-48;
			cout<<'+';
		}
		cout<<arr1[n-1]-48;

	}
	else{
		cout<<s;
	}
}
