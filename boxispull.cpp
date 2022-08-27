#include<bits/stdc++.h>

int main(){
	using namespace std;
	int t;
	cin>>t;
	int x1,x2,y1,y2,ans=0;
	for(int i=0;i<t;i++){
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2||y1==y2)
			ans=abs(x1-x2)+abs(y1-y2);
		else
			ans=abs(x1-x2)+abs(y1-y2)+2;
	cout<<ans<<endl;	
	}
	return 0;
}
