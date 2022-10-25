#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans=0;
	string arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<n;i++){
		if(arr[i][1]=='+'){
			++ans;
		}
		else{
			--ans;
		}
	}
	cout<<ans;

}
