/*
****************************
Author -> Rajneesh Chaudhary
****************************
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline cout<<"\n";

const int m=100000007;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x=-1;
        int y=0;

        for (int i = 0; i < n; ++i)
        {
            int temp ; cin >> temp;
            x &=temp;
            y |=temp;
        }
        cout<<y-x;nline
    }
    return 0;
}


