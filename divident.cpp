#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b,c,array[];
	cin>>a;
	while(a--){
		cin>>b>>c;
		if(b==1||c==1)
			cout<<1;
		else if(c>b)
			cout<<c%b;
		else 
			cout<<b%c;
	}
	return 0;
}
