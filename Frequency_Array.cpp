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
        int a[n];
        map<int ,int> m;

        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        bool r=true;
        for(auto it :m){
            if(it.second%it.first){
                r=false;
                break;
            }
        }
        if(r){
            ll j=1;
            ll b[n];
            map<ll,ll>p;
            for(int i=0;i<n;i++){
                if(m[a[i]]%a[i]==0){
                    m[a[i]]--;
                    b[i]=j;
                    p[a[i]]=j;
                    j++;
                }
                else{
                    b[i]=p[a[i]];
                    m[a[i]]--;
                }
            }
            for(int i=0;i<n;i++)
                cout<<b[i]<<" ";
        }
        else{
            cout<<-1;
        }
        nline

    }
    return 0;
}


