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
const int mp=100000;
int arrp[mp];

void generateprime(){
    arrp[1]=0;
    arrp[2]=1;
    for (int i = 2; i*i <= mp; ++i)
    {   
        if(arrp[i]==0)continue;
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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int i=200000; int j=200000;
        for (int m = 1; m <  n; ++m)
        {
            if(s[m-1]=='L' && s[m]=='R'){
                i=m;
            }
            if(s[m-1]=='R' && s[m]=='L'){
                j=m;
                break;
            }
        }

        if(i==200000 && j==200000){
            cout << -1 << endl;
        }
        else if(j != 200000){
            cout << 0 << endl;
        }
        else {
            cout << i << endl;
        }
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


