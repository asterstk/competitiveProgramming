// Not solved yet:(
#include<bits/stdc++.h>


int main(){
	using namespace std;
	int n,k,a,i,l,m;
	cin>>n>>k;
	i=0;
	m=k;
	while(m--){
		cin>>a;
		if(a>0){
			i++;
		}
	}
	int  j = n-k;
	while(j>0){
		cin>>l;
		if(l==a && l>0){
			i++;
		}
		j--;
	}
	cout<<i;
	return 0;
}
