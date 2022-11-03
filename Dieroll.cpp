#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n,m;
	cin>>n>>m;
	int moon=max(n,m);
	if(moon==1){
		cout<<"1/1";
	}
	else if(moon==2){
		cout<<"5/6";
	}
	else if(moon==3){
		cout<<"2/3";
	}
	else if(moon==4){
		cout<<"1/2";
	}
	else if(moon==5){
		cout<<"1/3";
	}
	else{
		cout<<"1/6";
	}
	
	return 0;
}
