#include<iostream>

using namespace std;

class base{
	private:
		float a,b,c;
	public:
		void print()
		{
			cout<<"What you want and select one number : "<<endl;
			cout<<"For Addition press	: 1"<<endl;
			cout<<"for Subtract press	: 2"<<endl;
			cout<<"For Maltiply press	: 3"<<endl;
			cout<<"For Divide press	: 4"<<endl;
			cout<<"Exit	: 5"<<endl<<endl;
			cout<<"Select one number which 1 to 4 ?"<<endl<<endl;
		}
		float getvalue()
		{
			cout<<"Enter the value for A	:";
			cin>>a;					
			cout<<"Enter the value for B	:";
			cin>>b;
		}
		float add()
		{
			c = a+b;
			cout<<"Addition is	: "<<c;
		}
		float sub()
		{
			c = a-b;
			cout<<"Subtract is	:"<<c;
		}
		float maltiply()
		{ 
			c = a*b;
			cout<<"Maltiply is	: "<<c;
		}
		float divide()
		{
			c = a/b;
			cout<<"Divide is	: "<<c;
		}
};

main()
{
	base p1;
	p1.print();
	int p;
	 	do
		 {
		 	cout<<endl<<"Enter you number	: ";
			cin>>p;
			p1.getvalue();
			switch(p)
		 	{
		 	case 1:
			 	p1.add();
				break;
			case 2:
				p1.sub();
				break;
			case 3:
				p1.maltiply();
				break;
			case 4:
			 	p1.divide();
		   		break;
			case 5:
				break;
			default:
				cout<<"Error in input; Try again ! "<<endl;
				break;
			}
		}while(p!=5);
return 0;
}
