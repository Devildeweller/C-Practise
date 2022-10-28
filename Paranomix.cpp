#include<bits/stdc++.h>
using namespace std;

int main()
{	
	
	int n,m;
	cin>>n>>m;
	int count=0;
	for(int i=n+1;i<=m;i++){
		int factor=0;
		for(int j=2;j<=m;j++){
			if(i%j==0){
				factor++;
			}
		}
		if(factor<2){
			count=i;
			break;
		}
	}
	if(count==m){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
