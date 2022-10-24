#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector <string> moon;
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		moon.push_back(temp);
	}
	for(int i=0;i<n;i++){
		if(moon[i].size()>10){
			cout<<moon[i][0];
			cout<<(moon[i].size()-2);
			cout<<moon[i][(moon[i].size()-1)]<<"\n";
		}
		else{
			cout<<moon[i]<<"\n";
		}
	}



	return 0;
} 
