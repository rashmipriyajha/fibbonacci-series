//fibbonacci series
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"How many terms of fabbonacci series you want to see?"<<endl;
	cin>>n;
	int a=0,b=1;
		cout<<a<<endl;
		cout<<b<<endl;
	
	for(int i=0;i<=n;i++)
	{
		int nextNo=a+b;
		cout<<nextNo<<endl;
		
		a=b;
		b=nextNo;
		
	}
	return 0;
	
}
