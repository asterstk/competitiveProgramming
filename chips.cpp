


int main(){
	using namespace std;
	long long int n,m;
	cin>>n>>m;
	int j=1;
	for(int i =1; i>0;i++){
		if(j>n)
			j=1;
		if(m>=j)
			m-=j;
		else
			break;
		j++;
	}
	cout<<m;
	return 0;
}
