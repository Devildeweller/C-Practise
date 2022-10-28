#include<bits/stdc++.h>
using namespace std;

int main()
{	
	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int count=0;
		for(int i=1;i<=9;i++){
			long long int moon=i;
			while(moon<=n){
				count++;
				moon=moon*10+i;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
