#include<iostream>
using namespace std;
class demo{          //CLASS DECLARE
	 int a,b;                 // DATA MEMBER
		public:   
		                    
		void add();                  //               MEMBER FUNCATION
		void sub();                  //               """"""""""""""
		void mul();                  //               """"""""""""""
		void div();                  //               """"""""""""""
		void mod();                  //               """"""""""""""
}a;


 main()                    
{
	cout<<"\t\t\t\t\tCALCULATER"<<endl;
	cout<<"\t\t\t\t-------------------------"<<endl;
	cout<<"Choose the following number for arthematic operation "<<endl;
	cout<<"1 : Addition"<<endl<<"2 : Substration"<<endl<<"3 : Multiplication"<<endl<<"4 : Dividation"<<endl<<"5 : Module"<<endl<<endl;
	cout<<"Enter the number = ";
	int n=0;
	cin>>n;
	switch(n)                        // SWITCH SUNCATION USED FOR USER OPTIONAL VALUE
	{
	case 1:
		cout<<endl;
		a.add();
		break;
	case 2:
		cout<<endl;
		a.sub();
		break;
	case 3:
		cout<<endl;
		a.mul();
		break;
	case 4:
		cout<<endl;
		a.div();
		break;
	case 5:
		cout<<endl;
		a.mod();
		break;  	
	default:
		cout<<endl;
		cout<<"You have Enter wrong number";
		break;
	}
	return 0;   
}


void demo::add()              //funcation for addition of two numbers
{
	cout<<"\t\tAddition"<<endl;
	cout<<"Enter the value for a = ";
	cin>>a;
	cout<<"Enter the value for b = ";
	cin>>b;
	cout<<a+b<<endl;
}
void demo::sub()            //funcation for substraction
{	
    cout<<"\t\tSubstraction"<<endl;
	cout<<"Enter the value for a = ";
	cin>>a;
	cout<<"Enter the value for b = ";
	cin>>b;
	cout<<"substraction = "<<a-b<<endl;
}
void demo::mul()            //funcation for multiplication
{	
    cout<<"\t\tMultiplication"<<endl;
	cout<<"Enter the value for a = ";
	cin>>a;
	cout<<"Enter the value for b = ";
	cin>>b;
	cout<<"Multiply = "<<a*b<<endl;
}
void demo::div()            //funcation for divide
{	
    cout<<"\t\tDivision"<<endl;
	cout<<"Enter the value for a = ";
	cin>>a;
	cout<<"Enter the value for b = ";
	cin>>b;
	cout<<"Division = "<<a%b<<endl;
}
void demo::mod()            //funcation for mod
{	cout<<"\t\tModule"<<endl;
	cout<<"Enter the value for a = ";
	cin>>a;
	cout<<"Enter the value for b = ";
	cin>>b;
	cout<<"Mod = "<<a%b<<endl;
}
 
