#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b,c;
	cin>>a;
	while(a--){
		cin>>b>>c;
		if(b>c)
			cout<<b%c;
		else
			cout<<c%b;
	}
	return 0;
}
