#include<bits/stdc++.h>

int main(){
	using namespace std;
	int numb;
	cin>>numb;
	string my_string;
	while (numb !=0){
		cin>>my_string;
		int number = my_string.length();
		if (number <=10){
			cout<<my_string<<endl;
		}
		else{
		int new_number;
		new_number = number - 2;
		number = number -1;
		cout<<my_string[0]<<new_number<<my_string[number]<<endl;
		}
		numb--;
	}
	return 0;
}
