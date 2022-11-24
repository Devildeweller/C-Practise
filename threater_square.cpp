/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,a; cin>>n>>m>>a;

    ll count=1;
    if(n%a)
    	count*=(n/a)+1;
    else 
    	count*=(n/a);
    if(m%a)
    	count*=(m/a)+1;
    else
    	count*=(m/a);

    cout<<count;
    
    return 0;
}
