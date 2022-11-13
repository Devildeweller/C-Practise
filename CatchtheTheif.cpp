/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y; cin>>x>>y;
    long long m; cin>>m;

    long long ans=m/y;
    if(ans%2){
    	cout<<ans+1<<" "<<y-(m%y)<<"\n";
    }
    else {
        cout<<ans+1<<" "<<(m%y)+1<<"\n";
    }
    return 0;
}
