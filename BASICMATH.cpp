/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int n,int k){
	for(int i=0;i<k;i++){
		if(n%10==0){
			n/=10;
		}
		else{
			n--;
		}
	}
	return n;
}
const int n=100;
vector<int> p(n+1,1);

void p1(){
	for(int i=2;i<=n;i++){
		if(!p[i]) continue;
		for(int j=i*i;j<=n;j+=i){
			p[j]=0;
		}
	}
}
int main() {
	p[1]=0;
	p1();
	int n1; cin>>n1;
	if(p[n1]){
		cout<<"Prime\n";
	}
	else{
		cout<<"NotPrime\n";
	}
}
