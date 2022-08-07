// Not solved yet:(
#include<bits/stdc++.h>


int main(){
	using namespace std;
	int n,k,a,i,l =0;
	cin>>n>>k;
	i=0;
	while(k--){
		cin>>a;
		if(a>0){
			i++;
		}
		else {
			i=i;
		}
	}
	int  j = n-k;
	while(j--){
		cin>>l;
		if(l==a && l!=0){
			i++;
		}
		else {
			break;
		}
	}
	cout<<i;
	return 0;
}
