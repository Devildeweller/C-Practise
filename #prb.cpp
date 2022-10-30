#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int count=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			char x;
			cin>>x;
			if(x=='#'){
				count++;
			}
		}
	}
	if(count%4==0){
		cout<<count/4;
	}
	else{
		cout<<count/4+1;
	}
	

	return 0;
}
