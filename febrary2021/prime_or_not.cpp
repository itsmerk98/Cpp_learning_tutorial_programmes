#include<iostream>
using namespace std;

int main()
{
	int n,flaf=0;
	cout<<"Enter the value : ";
	cin>>n;
	for(int i=0;i<=n/2;++i)
	{
		if(n%i==0)
			{
		cout<<"IS prime number ! ";
	}
		else
		{
			cout<<"Not prime number !";
		}
	}
	if(flaf==0)

return 0;
}
