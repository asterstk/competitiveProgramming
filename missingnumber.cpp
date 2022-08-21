#include<bits/stdc++.h>

int main(){
	using namespace std;
	int n,a;
	cin>>n;
	int sum =((n+1)*n)/2;
	int sum2=0;
	while(n>1){
		cin>>a;
		sum2+=a;
		n--;
	}
	int number = sum-sum2;
	cout<<number;
	return 0;
}
