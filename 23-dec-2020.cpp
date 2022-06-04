#include<iostream>
using namespace std;
class abc;
class xyz{
	int x;
	public:
		void setvalue(int i)
		{
			x = i;
		}
		friend void max(xyz, abc);
};
class abc{
	int a;
	public:
		void setvalue(int i)
		{
			a = i;
		}
		friend void max(xyz, abc);
};
void max(xyz m, abc n)
{
	if(m.x>=n.a)
	cout<<m.x;
	else
	cout<<n.a;
}
int main()
{
 	xyz X;
	X.setvalue(10);
	abc A;
	A.setvalue(20);
	max(X, A);        //	[Error] expected primary-expression before ',' token
return 0;
}
