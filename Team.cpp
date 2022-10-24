#include<bits/stdc++.h>
#include<vector>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,count=0,s=0;
	cin>>n;
	int* arr[n];
	int f=n;
	while(n--){
        arr[s]=new int[3];
        for(int i=0;i<3;i++){
            cin>>arr[s][i];
        }
        s++;
        
    }
	for(int h=0;h<f;h++){
		int temp=0;
		for(int j=0;j<3;j++){
            if(arr[h][j]==1){
            	temp+=1;
            }
            // else{
            // 	continue;
            // }
        }
        if(temp>1){
        	count+=1;
        }
	}
	cout<<count;
	

	return 0;
}
