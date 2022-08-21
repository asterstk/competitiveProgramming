#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b;
	cin>>a;
	b = a/100+(a%100)/20+((a%100)%20)/10+(((a%100)%20)%10)/5+(((a%100)%20)%10)%5;
	cout<<b;
	return 0;
}
