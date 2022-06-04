#include<iostream>
using namespace std;

class item{
	private:
		int number;
		float cost;
	public:
		float getdata(int a, float b)
		{
			return(a+b);
		}
}p1;

main()
{
	cout<<p1.getdata(12,21.20);
return 0;
}

