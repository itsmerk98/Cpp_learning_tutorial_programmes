#include<iostream>
using namespace std;
class s{
	public:
		int sum(int a, int b)
		{
			return a+b;
		}
		void putvalue();
		float sum(float a, float b)
		{
			return a+b;
		}
		int sum(int s, int n, int p)
		{
			return s+n+p;
		}
};
void s :: putvalue()
		{
			cout<<"value for SUM : "<<sum(int, int);
		}
main()
{
	s a;
	a.sum(2,3);
	a.putvalue();
	cout<<a.sum(34.34,23)<<endl;
	cout<<a.sum(23,45,64)<<endl;
	
	return 0;
}
