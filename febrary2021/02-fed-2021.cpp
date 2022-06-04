#include<iostream>
using namespace std;

int main()
{
	int A[5]={10,20,30,40,50};
	int k,n=4;
	for(int i=0;i<=n;i++)
	{
		cout<<"Array is pointing "<<i<<" value is : "<<A[i]<<endl;
	}
	cout<<"Enter the position : ";
	cin>>k;
	for(int i=k;i<=n;i++)
	{
		A[i]=A[i+1];
	}
	cout<<endl<<"After deletion "<<endl<<endl;
	for(int i=0;i<=3;i++)
	{
		cout<<"Array pointing on "<<i<<" position and value is => "<<A[i]<<endl;
	}
return 0;
}
