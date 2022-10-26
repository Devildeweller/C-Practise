#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t;
	cin>>t;
	while(t--){
		int n,q,sum=0;
		cin>>n>>q;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum+=x;
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			if((l-r)%2!=0){
				sum++;
			}
			else if(l==r){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	

}
