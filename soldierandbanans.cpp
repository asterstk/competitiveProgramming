#include<bits/stdc++.h>

int main(){
	using namespace std;
	int k,n,w;
	cin>>k>>n>>w;
	int sum=k*w*(w+1)/2;
	//cout<<sum;
	if (sum<n)
		cout<<0;
	else
		cout<<sum-n;
	return 0;
}
