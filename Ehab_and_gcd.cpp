#include<bits/stdc++.h>
#include <string>
#include <algorithm>
#include<numeric>
using namespace std;

int main()
{	

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i=1;i<n;i++){
			int a=i;
			int b=n-i;
			int g=__gcd(a,b);
			if(g+(a*b)/g==n){
				cout<<a<<" "<<b<<endl;
				break;
			}
		}
	}
	return 0;
}
