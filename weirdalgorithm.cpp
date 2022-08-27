#include<bits/stdc++.h>

int main(){
	using namespace std;
	int n;
	cin>>n;
	cout<<n<<" ";
	for(int i=1;i>0;i++){
		if(n==1)
			break;
		else if(n%2==0){
			n/=2;
			cout<<n;
		}
		else{
			n=n*3+1;
			cout<<n;
		}
		cout<<" ";
	}
	return 0;
}

