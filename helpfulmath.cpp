#include<bits/stdc++.h>

int main(){
	using namespace std;
	string s,q;
	cin>>s;
	int b =s.length();
	for(int i=0;i<b;i++){
		if(s[i]!='+'){
			q.push_back(s[i]);
		}
	}
	sort(q.begin(),q.end());
	
	int a = q.length();
	cout<<q[0];
	for(int j=1;j<a;j++){
		cout<<"+"<<q[j];
	}
	
	return 0;
}
