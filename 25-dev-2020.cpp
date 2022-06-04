#include<iostream>
using namespace std;
//USING 'THIS' OPERATER AND DEFULTE ARGUMENT IN THIS PROGRAM   //

class Base{
	int a, b;
	public:
		void setvalue(int a, int b=20)
		{
			cout<<"Enter the valua for A : ";
			cin>>a;
			a = a;
			b = b;
		}
		int display()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b;
		}
};
main()
{
	Base o1;
	o1.setvalue(20);
	o1.display();
return 0;
}

//---------------------------------------object memory allocation-----------------------------

/*class Alfa{
	int a, b;
	public:
		void getdata();
		void display()
		{
			cout<<"Value A is : "<<a;
			cout<<endl<<"Value B is : "<<b;
		}
};
void Alfa :: getdata()
{
			cout<<"Enter the value for A = ";
			cin>>a;
			cout<<"Enter the value for B = ";
			cin>>b;
}
main()
{
	Alfa A, B;
	A.getdata();
	A.display();
	cout<<endl<<"Secend statement "<<endl;
	B.getdata();
	B.display();
return 0;
}*/
