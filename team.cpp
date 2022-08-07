#include<bits/stdc++.h>

int main(){
	using namespace std;
	int a,b,c,d,e,f;
	b=0;
	cin>>a;
	while(a>=1){
		cin>>c>>d>>e;
		f=c+d+e;
		if(f>=2){
				b++;
		}
		a--;
		f=0;
	}
	cout<<b;
	return 0;
}
	
