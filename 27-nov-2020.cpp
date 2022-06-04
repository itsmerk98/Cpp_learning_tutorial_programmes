#include<iostream>
using namespace std;
/*main()
{
	float p=123.12;
	int n;
	n=p;
	
	cout<<n<<"\n"<<sizeof(n);
return 0;
}*/
/*main()
{
	char * const pter1 = "GOOD";
	cout<<pter1<<sizeof(pter1);
return 0;
}*/
main()
{
	int p;
	int *x=&p;
	int &m=*x;
	cout<<x;
	cout<<endl<<m;
	cout<<endl<<p;
return 0;
}

