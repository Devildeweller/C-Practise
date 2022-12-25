/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int m=100000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; t=1;
    while(t--){
        int n , p ; cin >> n;
        int a[n];

        for (int i = 1; i <= n; ++i){
            cin >> p;
            a[p - 1] = i;            
        }

        for (int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }

        cout << endl;

    }
    return 0;
}


