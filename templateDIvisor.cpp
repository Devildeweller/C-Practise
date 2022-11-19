/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

int pw(int a,int b, int m){
	if(b == 0){
		return a%m;
	}
	if(b%2==0){
		int t=pw(a,b/2,m);
		return (1ll * t * t % m);
	}
	else{
		int t=pw(a,(b-1)/2,m);
		t= (1ll* t* t) %m;
		return (1ll * a * t % m);
	}
}

int div(int a,int b, int m){
	//the actual calc for this ->
	// int res1=(a/b)%m;
	a%=m;
	int inv_b=pw(b,m-2,m); // fermet 's little  theoram -<:
	int res2= a*inv_b %m ;
	//cout<<res2<<"\n";
	return res2;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	}
	return (b%a,a);
}

int main(){
	//cout<<gcd(18,8);
	cout<<div(6,3,17);
}
