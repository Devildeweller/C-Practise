#include <bits/stdc++.h>
using namespace std;

// countSetBits -> function to count number of 1's

// unsigned int countSetBits(unsigned int n){
//     unsigned int count = 0;
//     while(n){
//         count+=n & 1;
//         n>>=1;
//     }
//     return count;
// }

//right most bit 
// unsigned int getFirstSetBitPos(int n){
//         return log2(n & -n) + 1;
// }
bool checkbit(int n,int k)
{
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if ((k & 1) && (i==31-(k-1)) )
            return true;
    }
    return false;
}


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int k1,l,r,l1,r1;
        
        for(int i=0;i<q;i++){
            int count=0; 
            cin>>k1>>l>>r>>l1>>r1;
            //cout<<k1<<"\n";
            for(int j=l-1;j<r;j++){
                for(int k=l1-1;k<r1;k++){
                    int m=(a[j] ^ a[k]);
                    //cout<<m<<"\n";
                    //cout<<k<<"\n";
                    if(checkbit(m,k1)){
                        count++;
                    }
                }
            }
            
            cout<<count<<"\n";
            //cout<<loopc<<"\n";
        }
    }
	return 0;
}
