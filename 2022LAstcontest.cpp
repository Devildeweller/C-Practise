/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int m=1000000007;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector <ll> v;
        for (int i = 0; i < n+m; ++i){
            ll temp; cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end()-1);
        reverse(v.begin(),v.end());

        ll moon=0;

        for (int i = 0; i < n; ++i)
        {
            moon += v[i];
        }

        cout << moon << endl;

    }
    return 0;
}


