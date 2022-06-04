//marksheet program
#include<iostream>
#include<stdlib.h>

using namespace std;
main()
{
	int total[5],s[5],internal[5],min=30,i,j,roll_no,sum;
	char name[20],fname[10],std[10],result[5];
	float per;
	
	
	//student details entry
	
	cout<<"Enter the student name = ";
	gets(name);
	
	//enter father name
	
	cout<<"Enter the student father name = ";
	gets(fname);
	
	//Enter the roll no
	
	cout<<"Enter the roll number = ";
	cin>>roll_no;
	
	system("cls");
	
	 //Enter the marks  fir internal exam
	cout<<"Enter internal marks(20) using following subject number "<<endl;
	cout<<"1. c++"<<endl<<"2. dbms"<<endl<<"3. ds&a"<<endl<<"4. os"<<endl<<"5. vb.net"<<endl<<endl;
	
	
		for(i=1;i<=5;i++)
	{
		cout<<i<<". ";
		cin>>internal[i];
	}

	//Enter the marks for seacional exam
	system("cls");
	cout<<"Enter secional marks(80) using following subject number "<<endl;
	cout<<"1. c++"<<endl<<"2. dbms"<<endl<<"3. ds&a"<<endl<<"4. os"<<endl<<"5. vb.net"<<endl<<endl;
	
	for(i=1;i<=5;i++)
	{
		cout<<i<<". ";
		cin>>s[i];
	}
	

    //total of internal and secional for per subject using loop
    for(i=1;i<=5;i++)
    {
    	total[i]=internal[i]+s[i];
	}
	
	//total of all subjects
	sum = total[1]+total[2]+total[3]+total[4]+total[5];
	
	
	//percentage
	per=sum/5;
      

	system("cls");
	
	// degine of marksheet start hera 
	
	cout<<"************************************************************"<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"                  JAI NARAYAN VYAS UNIVERCITY               "<<endl;
	cout<<"                       JODHPUR(RAJASTHAN)                   "<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"NAME  = "<<name<<endl;
	cout<<"FNAME = "<<fname<<endl;
	cout<<"Roll No = "<<roll_no<<endl;
	cout<<"************************************************************"<<endl;
	cout<<"S_no    Subjects    Min-Marks   Internal   Secional    Total"<<endl;
	cout<<"------------------------------------------------------------"<<endl;
   printf("  1     c-programme     %d          %d          %d        %d \n",min,internal[1],s[1],total[1]);
   printf("  2     DBMS            %d          %d          %d        %d \n",min,internal[2],s[2],total[2]);
   printf("  3     DS&A            %d          %d          %d        %d \n",min,internal[3],s[3],total[3]);
   printf("  4     VB.NET          %d          %d          %d        %d \n",min,internal[4],s[4],total[4]);
   printf("  5     O.S             %d          %d          %d        %d \n",min,internal[5],s[5],total[5]);
    cout<<"------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
   printf("                                                total = %d \n",sum);
   cout<<"------------------------------------------------------------"<<endl;
   cout<<"------------------------------------------------------------"<<endl;
   cout<<"Percantage = "<<per<<"%"<<endl;
       if(per <=30)
    {
    	cout<<"fail ho gaya aapka chora jutai marna salai ko"<<endl;
	}
	else if(per>=60)
	{
		cout<<"3rd class"<<endl;
	}
    else if(per>=80)
    {
    	cout<<"laddu khao aapka beta 1st aaya hai"<<endl;
	}
   cout<<"------------------------------------------------------------"<<endl;
   cout<<"************************************************************"<<endl;
   cout<<"************************************************************"<<endl;
	return 0;
	
	

     
    
	
}
