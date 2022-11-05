#include <bits/stdc++.h>
using namespace std;

long long sumAP(long long n, long long d){   
    n /= d;
    return (n)* (1 + n)*d/2;
}
long long sumMultiples(long long n, long long a,long long b){
    n--;
    long lcm =(a*b)/__gcd(a,b);
    return sumAP(n, a)+sumAP(n, b)-sumAP(n, lcm);
}

int main() {
	long long t; cin>>t;
	while(t--){
	    long long n,x,y,sum=0; cin>>n>>x>>y;
	    sum+=(n*(n+1))/2;
	    sum-=sumMultiples(n+1,x,y);
	    cout<<sum<<endl;
	}
	return 0;
}
