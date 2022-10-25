#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	int adv_numb=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}


	for(int i=0;i<n;i++){
		if(arr[i]>=arr[k] && arr[i]>0){
			adv_numb++;
		}
	}
	cout<<adv_numb;
}
