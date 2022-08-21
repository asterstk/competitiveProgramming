#include<bits/stdc++.h>
using namespace std;

int main(){
	int number;
	cin>>number;
	int i=1;
	while(number!=0)
		number=number-i;
		cout<<number<<"/n";
		i++;
	return 0;
}

