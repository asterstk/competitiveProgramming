#include<bits/stdc++.h>

int main(){
	using namespace std;
	int n,k;
	cin>>n>>k;
	for(int i =0;i<k;i++){
		if(n%10==0)
			n/=10;
		else
			n--;
	}
	cout<<n;
}
