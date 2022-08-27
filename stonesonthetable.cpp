#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b=0;
	cin>>a;
	char s[a+1];
	s[0]='q';
	for(int i=1;i<a+1;i++){
		cin>>s[i];
		if(s[i]==s[i-1])
			b++;
	}
	cout<<b;
	return 0;	
}
