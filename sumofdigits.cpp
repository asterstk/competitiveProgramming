#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b,c,sum=0;
	cin>>a;
	while(a--){
		cin>>b;
		while(b>0){
			c=b%10;
			sum=sum+c;
			b=b/10;
		}
		cout<<sum;
		sum=0;
	}
	return 0;	
}
