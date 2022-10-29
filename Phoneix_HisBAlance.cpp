#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n;
	cin>>n;

	while(n--){
		int x;
		cin>>x;
		int y=x/2;
		int sum_fianl=0;
		int sum_intial=0;
		for(int i=1;i<y;i++){
			sum_fianl+=pow(2,i);
			sum_intial+=pow(2,i+y-1);
		}
		sum_intial+=pow(2,x-1);
		sum_fianl+=pow(2,x);
		cout<<sum_fianl-sum_intial<<endl;
	}


	return 0;
}
