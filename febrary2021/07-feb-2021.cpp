#include<iostream>
using namespace std;

int main()
{
	int Array[2][4]={{10,20,30,40},{40,30,20,10}};
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Pointing Array["<<i<<"]["<<j<<"] : "<<Array[i][j]<<endl;
		}
	}
return 0;
}
