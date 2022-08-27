#include<bits/stdc++.h>

int main(){
	using namespace std;
	long long int n;
	cin>>n;
	n+=1;
	if(n-1==0)
		cout<<0;
	else if(n%2==0)
		cout<<n/2;
	else
		cout<<n;
	return 0;
}
