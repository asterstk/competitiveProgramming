#include<bits/stdc++.h>

int main(){
	using namespace std;
	int length,breadth;
	cin>>length>>breadth;
	int domino_length = 2,domino_breadth=1;
	double number_lengthwise = length / domino_length;
	double number_breadthwise = breadth / domino_breadth;
	int total = number_lengthwise * number_breadthwise;
	cout<<total;
	return 0;
}
