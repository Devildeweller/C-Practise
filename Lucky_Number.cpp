#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{	

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int arr[6];
		for(int i=0;i<6;i++){
			stringstream string;
    		string <<s[i];
    		string >>arr[i];
		}
		if(arr[0]+arr[1]+arr[2]==arr[3]+arr[4]+arr[5]){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
