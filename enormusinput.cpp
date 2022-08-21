#include<bits/stdc++.h>

int main(){
	using namespace std;
	int n,k,a,s=0;
	cin>>n>>k;
	while(n--){
		cin>>a;
		if(a%k==0)
			s++;
	}
	cout<<s;
}

