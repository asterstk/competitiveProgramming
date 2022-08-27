#include<bits/stdc++.h>

int main(){
	using namespace std;
	string s;
	cin>>s;
	int a =0;
	int b=s.length();
	sort(s.begin(),s.end());
	for(int i =1;i<b;i++){
		if(s[i]==s[i-1])
			a++;
	}
	int ans = s.length();
	ans -= a;
	if(ans%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;		
}
