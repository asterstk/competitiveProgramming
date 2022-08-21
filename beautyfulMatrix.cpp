#include<bits/stdc++.h>

int main(){
	using namespace std;
	int input;
	int r,c,total;
	
	for(int a = 1;a<=5;++a){
		for(int s =1;s<=5;++s){
			cin>>input;
			if(input == 1){
				r = a;
				c = s;
			}
		}
		cout<<endl;
	}
	total = abs(3-r) + abs(3-c);
	cout<<total;
	return 0;
}
