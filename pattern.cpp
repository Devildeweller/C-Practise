#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size=2*n-1;
    int start=0;
    int end=size-1;
    int arr[size][size];
    for(int i=0;i<n;n--){
        for(int r=start;r<=end;r++){
            for (int j=start;j<=end;j++){
                if(r == start ||  r== end ||  
                    j==start || j==end)
                    arr[r][j]=n;
            }
        }
        ++start;
        --end;
    }


    for(int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            printf("%d",arr[i][j] );
        }
        printf("\n");
    }
}
