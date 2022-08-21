#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c){
		if(b+c>a)
			cout<<0;
		else
			cout<<a-b-c+1;
	}
	else if(b>a&&b>c){
		if(a+c>b)
			cout<<0;
		else
			cout<<b-a-c+1;
	}
	else{
		if(a+b>c)
			cout<<0;
		else
			cout<<c-a-b+1;
	}
	return 0;	
}
