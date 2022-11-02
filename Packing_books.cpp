#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y<z){
	        cout<<x<<endl;
	    }
	    else if(y==z || y%z==0){
	       int moon=(y/z)*x;
    	    cout<<moon<<endl;
	    }
	    else{
    	    int moon=(y/z+1)*x;
    	    cout<<moon<<endl;
	    }
	}
	return 0;
}
