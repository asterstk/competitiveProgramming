#include<bits/stdc++.h>

int main(){
	using namespace std;
	int power,result=1;
	cin>>power;
	result=pow(5,power);
	int digit1= result%100;
	cout<<digit1;
	return 0;
}
