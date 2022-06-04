#include<iostream>
using namespace std;
/*
main()
{
	int a[5] = {10,20,30,40};
	
	for(int i=0;i<=3;i++)
	{
		cout<<"Array is pointing : "<<a[i]<<endl;
	}
	
	int Addpointing = 1;
	int b = 10;
	a[Addpointing] = b;
	
	for(int i=0;i<=4;i++)
	{
		cout<<"After adding array pointing : "<<a[i]<<endl;
	}
return 0;
}
*/
/*
class Alfa{
	private:
		int a;
		float b;
		char name[20];
	public:
		void Getdata()
		{
			cout<<"Enter you Name : ";
			cin>>name;
			cout<<"Enter value for variable A : ";
			cin>>a;
			cout<<"Enter value for variable b : ";
			cin>>b;
		}
		void Printvalue()
		{
			cout<<endl<<endl<<endl;
			cout<<"Yout name is : "<<name<<endl;
			cout<<"Value A is : "<<a<<endl;
			cout<<"Value B is : "<<b<<endl;
		}
};

main()
{
	Alfa A1;
	A1.Getdata();
	A1.Printvalue();
	
return 0;
}
*/

#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}
