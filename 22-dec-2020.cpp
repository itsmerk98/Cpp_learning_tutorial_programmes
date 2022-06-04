#include<iostream>
using namespace std;
 /*class employee{
 	char Name[30];
 	float Age;
 	public:
 		void getdata(void);
 		void putdata(void);
 };
 void employee :: getdata(void)
 {
 	cout<<"Enter name	: ";
 	cin>>Name;
 	cout<<"Enter age	:";
 	cin>>Age;
 }
 void employee :: putdata(void)
 {
 	cout<<"Name	:"<<Name<<endl;
 	cout<<"Age	:"<<Age;
 }
 const int size=3;
 int main()
 {
 	 employee manager[size];
 	 for(int i=0; i<size; i++)
 	 {
 		cout<<endl<<"Detaile of manager	: "<<i+1<<endl;
 		manager[i].getdata();
     }
	 cout<<endl;
	 for(int i=0; i<size;i++)
	 {
	 	cout<<endl<<"Manager "<<i+1<<endl;
	 	manager[i].putdata();
	 }
return 0;
 }*/
 
 ///////====================================================================================================
 
/*class Time{
	int hours;
	int minutes;
	public:
		void gettime(int h, int m)
		{
			hours = h;
			minutes = m;
		}
		void puttime(void)
		{
			cout<<hours<<" Hours ";
			cout<<minutes<<" Minutes "<<endl;
		}
		void sum(Time, Time);
};
void Time :: sum(Time T1, Time T2)
{
	minutes = T1.minutes + T2.minutes;
	hours = minutes/60;
	minutes = minutes%60;
	hours = hours + T1.hours + T2.hours;
}
int main()
{
	Time T1,T2,T3;
	
	T1.gettime(2,45);
	T2.gettime(3,30);
	
	T3.sum(T1,T2);
	
	cout<<"T1 : ";T1.puttime();
	cout<<"T2 : ";T2.puttime();
	cout<<"T3 : ";T3.puttime();
	
return 0;
}*/



//////////////////////////////////////////////////////////////////////////////////////////////////////////////


class sample{
	int a;
	int b;
	friend float mean(sample s);
	public:
		void setvalue()
		{
			a = 35;
			b = 50;
		}
		
};
float mean(sample s)
{
	return float(s.a + s.b);
}

int main()
{
	sample X;
	X.setvalue();
	cout<<"Mean value	: "<<mean(X)<<endl;
return 0;
}
