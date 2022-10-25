#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=0,b=0;
	int row=0;
	int column=0;
	for(int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			int temp;
			cin>>temp;
			if(temp==1){
				row+=i+1;
				column+=j+1;
			}
		}
	}
	a=3-row;
	b=3-column;

	if(a<1){
		a=a*(-1);
	}
	if(b<1){
		b=b*(-1);
	}

	cout<<a+b;


}
