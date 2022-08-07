#include<bits/stdc++.h>
using namespace std;
int main(){
	int number;
	cin>>number;
	int divident;
	divident = number%2;
	if (divident ==0 && number!=2){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	return 0;

}	
