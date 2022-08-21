#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b,c;
	cin>>a>>b;
	for(int i=1;i>0;i++){
		a*=3;
		b*=2;
		c=i;
		if(a>b)
			break;
	}
	cout<<c;
	return 0;
}
