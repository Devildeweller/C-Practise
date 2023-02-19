/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int mod=1000000007;
const int mp=1000001;
int arrp[mp];

void generateprime(){
    arrp[1]=1;
    arrp[2]=0;
    for (int i = 2; i*i <= mp; ++i)
    {   
        if(arrp[i]==1)continue;
        for (int j = i*i; j <= mp; j+=i)
        {
            arrp[j]=1;
        }
    }
}

int primefactor(int n){
    int cnt=2;
    for(int i=2; i*i <=n ;++i){
        if(n%i==0){
            cnt++;
            if(n/i != i){
                cnt++;
            }
        }
        
    }
    return cnt;
}


/*--------------------------------------------------------
--------------------------------------------------------*/


void solve(){
    int t; cin >> n;
    while(t--){
        
    }
}


/*--------------------------------------------------------
--------------------------------------------------------*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}


