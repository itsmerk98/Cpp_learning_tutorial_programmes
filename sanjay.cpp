
//  write a program for print marksheet

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
main()
{
	int i,roll_no,s_no,min=30,internal[5],sessional[5],total[5],sum;
	char name[20];
	char fname[20];
	float per;
	cout<<"enter internal marks(20) using following subject number"<<endl;
	cout<<"1. C++"<<endl<<"2. DBMS"<<endl<<"3. DS&A"<<endl<<"4. OS"<<endl<<"5. Vb.Net"<<endl<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<i<<". ";
		cin>>internal[i];
	}
	system("cls");
	cout<<"enter sessional marks(80) using following subject number"<<endl;
	cout<<"1. c++"<<endl<<"2. DBMS"<<endl<<"3. DS&A"<<endl<<"4. OS"<<endl<<"5. Vb.Net"<<endl<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<i<<". ";
		cin>>sessional[i];
	}
	for(i=1;i<=5;i++)
	{
		total[i]=internal[i]+sessional[i];
	}
	sum=total[1]+total[2]+total[3]+total[4]+total[5];
	per=sum/5;
	system("cls");
	/*
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"                                  JAI NARAYAN VYAS UNIVERSITY                                          "<<endl;
	cout<<"                                       JODHPUR(RAJASTHAN)                                              "<<endl;
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"*******************************************************************************************************"<<endl;   */


	gets(name);
	cout<<"NAME = ";
 	gets(name);
	cout<<"FNAME = ";
	gets(fname);
	cout<<"Roll no = ";
	cin>>roll_no;
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"s_no          subjects           Min-Marks           Internal           Sessional           total      "<<endl;
	printf("1               c++                  %d                 %d                  %d               %d",min,internal[1],sessional[1],total[1]);
	
	return 0;
}
//  write a program for print marksheet

/*
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
main()
{
	int i,roll_no,s_no,min=30,internal[5],sessional[5],total[5],sum;
	char name[15],fname[20];
	float per;
	cout<<"enter internal marks(20) using following subject number"<<endl;
	cout<<"1. C++"<<endl<<"2. DBMS"<<endl<<"3. DS&A"<<endl<<"4. OS"<<endl<<"5. Vb.Net"<<endl<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<i<<". ";
		cin>>internal[i];
	}
	system("cls");
	cout<<"enter sessional marks(80) using following subject number"<<endl;
	cout<<"1. c++"<<endl<<"2. DBMS"<<endl<<"3. DS&A"<<endl<<"4. OS"<<endl<<"5. Vb.Net"<<endl<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<i<<". ";
		cin>>sessional[i];
	}
	for(i=1;i<=5;i++)
	{
		total[i]=internal[i]+sessional[i];
	}
	sum=total[1]+total[2]+total[3]+total[4]+total[5];
	per=sum/5;
	system("cls");
	/*
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"                                  JAI NARAYAN VYAS UNIVERSITY                                          "<<endl;
	cout<<"                                       JODHPUR(RAJASTHAN)                                              "<<endl;
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"*******************************************************************************************************"<<endl;   
	cout<<"NAME = ";
 	gets(name);
	cout<<"FNAME = ";
	gets(fname);
	cout<<"Roll no = ";
	cin>>roll_no;
	cout<<"*******************************************************************************************************"<<endl;
	cout<<"s_no          subjects           Min-Marks           Internal           Sessional           total      "<<endl;
	printf("1               c++                  %d                 %d                  %d               %d",min,internal[1],sessional[1],total[1]);
	
	return 0;
}*/
