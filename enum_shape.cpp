#include<iostream>
using namespace std;

enum shape
{
	circle,
	rectangle,
	triangle,
};  

int main()
{
	//int code;
	cout<<"Enter shape code: ";
	int code;
	cin>>code;
	while(code>=circle && code<=triangle)
	{
		switch(code)
		{
			case circle:
				cout<<"Circle";
				break;
			case rectangle:
				cout<<"Rectamgle";
				break;
			case triangle:
				cout<<"Triangle";
				break;
		}
		cout<<endl<<"Enter shape code: ";
		cin>>code;
	}
	cout<<"Bye\n";
return 0;
}
/*main()
{
	float toral=100;
	float &sum=toral;
	cout<<toral;
	cout<<endl<<sum;
	toral=sum+29;
	cout<<endl<<toral;
	sum=0;
	cout<<endl<<toral;
	int n[10];
	int &s=n[10];
	char &a = "\n";
	cout<<a<<s;
	cout<<n;
return 0;
}*/
/*main()
{
	int x;
	int *p = &x;
	int &m = *p;
	//int & n = 50;
	cin>>x;
	//cout<<" "<<p;
	cout<<endl<<m;
	cout<<endl<<p;
return 0;
}
*/
/*void f(int &x)
{
	x=x+20;
	cout<<"";
	
}

main()
{
	
	int m=10;
	f(m);
	cout<<m;
	
return 0;

}*/
/*int m=10;

main()
{
	int m=20;
	{
		int k=m;
		int m=30;
		
		
		cout<<"we are in inner block: \n";
		cout<<"k= "<<m<<"\n";
		cout<<"m= "<<m;
		cout<<endl<<"::m= "<<::m;
	}
	cout<<endl<<"We are in outer block: ";
	cout<<endl<<"m= "<<m;
	cout<<endl<<"::m="<<::m;
	cout<<endl<<sizeof(int);
	
	m=new int;
	cout<<endl<<m;
return 0;
}*/
