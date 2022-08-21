#include<bits/stdc++.h>
#include<string> //tolower
#include<algorithm> //transform

int main(){
	using namespace std;
	string a,b;
	cin>>a;
	cout<<"\n";
	cin>>b;
	transform(a.begin(),a.end(),a.begin(),::tolower);
	transform(b.begin(),b.end(),b.begin(),::tolower);
	if(a>b)
		cout<<"1";
	else if(a==b)
		cout<<'0';
	else
		cout<<"-1";
	return 0;
}
