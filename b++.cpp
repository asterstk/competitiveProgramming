#include<bits/stdc++.h>

int main(){
	using namespace std;
	int n,s=0;
	string a;
	cin>>n;
	while(n--){
		cin>>a;
		if(a=="X++"||a=="++X")
			s++;
		else 
			s--;
		}
	cout<<s;
	return 0;
}
