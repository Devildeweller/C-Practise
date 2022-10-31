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
 
 
	for(int i=0;i<k;i++){
		if(arr[i]>0){
			adv_numb++;
		}
	}
 
	int z=k;
	for(int i=z-1;i<k;i++){
		if(arr[i]==arr[i+1] && arr[i]>0){
			adv_numb++;
			k++;
		}
	}
	cout<<adv_numb;
} 
