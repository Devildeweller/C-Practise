#include<bits/stdc++.h>
using namespace std;

int main()
{	
	
	int n;
	cin>>n;
	int ans=0;
	while(n>0){
		if(n>=5){
			n=n-5;
			ans++;
		}
		else if(n>=4){
			n=n-4;
			ans++;
		}
		else if(n>=3){
			n=n-3;
			ans++;
		}
		else if(n>=2){
			n=n-2;
			ans++;
		}
		else if(n>=1){
			n=n-1;
			ans++;
		}
	}
	cout<<ans;	

	return 0;
}
