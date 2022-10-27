#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int k,n,w;
	cin>>k>>n>>w;

	int cost_of_banana=0;
	for(int i=1;i<w+1;i++){
		cost_of_banana+=i*k;
	}
	if(cost_of_banana<=n){
		cout<<0;
	}
	else{
		cout<<cost_of_banana-n;
	}
	

}
