#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n;
	cin>>n;

	while(n--){
		int x,y;
		cin>>x>>y;
		int ans=1;
		x=x-2;
		if(x%y!=0 && x>y){
			ans+=(x/y)+1;
		}
		else if(x>=y){
			ans+=x/y;
		}
		else if(x+2>2){
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
