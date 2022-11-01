#include<bits/stdc++.h>
using namespace std;

int main()
{	

	int t,m;
	cin>>t>>m;
	int ans=0;
	while(t--){
		for(int i=0;i<m;i++){
			char temp;
			cin>>temp;
			if(temp=='C' || temp=='Y' || temp=='M'){
				ans++;
			}
		}
	}
	if(ans>0){
		cout<<"#Color";
	}
	else{
		cout<<"#Black&White";
	}
	return 0;
}
