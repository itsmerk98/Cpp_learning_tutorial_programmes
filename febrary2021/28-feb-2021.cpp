#include<iostream>
using namespace std;

class Af{
	private:
		//int a=6,b=4;
	public:
		int sum(int a, int b)
		{
			return a+b;
		}
};
int main()
{
	int a;
	
	a = 5+4-2*5/5;
	
	cout<<a;
	
	Af p;
	
	cout<<endl<<p.sum(6,4);
	
return 0;
}
