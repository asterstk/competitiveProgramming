#include<bits/stdc++.h>

int main(){
	using namespace std;
	using namespace std;
	int input;
	cin>>input;
	int steps;
	steps = input/5;
	if(input%5!=0)
		steps=steps+1;
	cout<<steps;
	return 0;
}
