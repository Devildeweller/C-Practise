#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int no_of_ways=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			no_of_ways++;
		}
	}
	if(n<2){
		cout<<n;
	}
	else{
		cout<<no_of_ways;
	}
	
}
