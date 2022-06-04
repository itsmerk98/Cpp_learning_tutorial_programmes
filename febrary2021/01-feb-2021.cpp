#include<iostream>
using namespace std;

int main()
{
	int array[10]={10,20,30,40};
	int UB=3;
	
	for(int i=0;i<=UB;i++)
	{
		cout<<"Array is pointing on position "<<i<<" value is :"<<array[i]<<endl;
	}
	
	int n;
	cout<<"Enter the position : ";
	cin>>n;
	for(int j=UB;j>=n;j--)
	{
		array[j+1]=array[j];
	}
	UB=4;
	cout<<"Enter the value : ";
	cin>>array[n];
	cout<<"After inserting new array : "<<endl;
	for(int i=0;i<=UB;i++)
	{
		cout<<"Now array is pointing : "<<array[i]<<endl;
	}
return 0;
}
