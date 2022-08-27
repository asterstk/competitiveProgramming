
#include<bits/stdc++.h>


int main(){
	using namespace std;
	long long int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	if(l1<l2){
		if(l2>r1)
			cout<<"0";
		else
			cout<<r1-l2;
	}
	else{
		if(r2<l1)
			cout<<"0";
		else
		    cout<<abs(l1-r2);
	}	
	return 0;
}
