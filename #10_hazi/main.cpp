#include<iostream>

using namespace std;

void HANOI(int n,char From, char Stock,char To)
{
	if(n==1)
	{
		cout<<n<<"."<<From<<" -> "<<To<<endl;
		return;
	}

	HANOI(n-1,From,To,Stock);
	cout<<n<<"."<<From<<" -> "<<To<<endl;
	HANOI(n-1,Stock,From,To);
}


int main()
{
	int n;

	cout<<"Korongok szama:";
	cin>>n;
	HANOI(n,'A','B','C');

	return 0;
}
