#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b;
	float c;
	cin>>a>>b;
	if(a>b)
		c=(float)b;
	else if(a%5==0)
		c=(float)b-((float)a+.5);
	else
		c=(float)b;
	cout<<c;
	return 0;
}
