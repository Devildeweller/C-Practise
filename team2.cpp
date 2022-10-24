#include<bits/stdc++.h>
#include<vector>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	int* arr[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[3];
		for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }       
	}
	for(int h=0;h<n;h++){
		int temp=0;
		for(int j=0;j<n;j++){
            if(arr[h][j]==1){
            	temp+=1;
            }
        }
        if(temp>1){
        	count+=1;
        }
	}
	cout<<count;
	

	return 0;
}
