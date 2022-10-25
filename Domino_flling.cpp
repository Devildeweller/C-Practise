#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	int ans=0;
	cin>>m>>n;
	if(m%2==0){
		ans+=(m/2)*n;
	}
	else if(n%2==0){
		ans+=m*(n/2);
	}
	else{
		ans+=((m/2)*n)+(n/2);
	}
	cout<<ans;
}
