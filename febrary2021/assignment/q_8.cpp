#include<iostream>
using namespace std;
class Base{
	private:
		int a, b;
	public:
		void set(int x,int y)
		{
			a = x;
			b = y;
		}
		void display()
		{
			cout<<"The value for A : "<<a<<endl;
			cout<<"The value for B : "<<b<<endl;
		}
		friend void sum(Base f);
};
void sum(Base f)
{
	int sum;
	sum = f.a+f.b;
	cout<<"The sum is : "<<sum;
}
main()
{
	Base f;
	f.set(10,20);
	f.display();
	sum(f);
return 0;
}
