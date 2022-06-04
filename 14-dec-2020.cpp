#include<iostream>
#include<conio.h>
#define CUBE(x) x*x*x
using namespace std;

inline int cube(int);
int main()
{
	
	int a,n;
	int cube(int);
	
	cout<<"Enter a number : ";
	cin>>a;
	n=CUBE(a+1);
	cout<<"Cube of "<<a<<" is : "<<n;
	
	n=cube(a+1);
	cout<<"\ncube of "<<a<<" is : "<<n;
	return 0;
}
inline int cube(int x)
	{
		return x*x*x;
	}





/*#include<iostream>
using namespace std;

class item{
	static int count;
	//int number;
	public:
		void getdata(int a);
		void showdata(void);
};
void item :: getdata(int a)
{
	count++;
}
void item :: showdata(void)
{
	cout<<"Count:  ";
	cout<<count<<endl;
}
int item :: count=23;
 
int main()
{
	item a,b,c;
	a.showdata();
	
	a.getdata(12);
	c.showdata();
	b.getdata(13);
	b.showdata();
	c.getdata(14);
	/*cout<<"After reading data :"<<endl;
	a.showdata();
	b.showdata();
	c.showdata();
return 0;
}*/
