#include<iostream>
#include<conio.h>
//#define m 50
using namespace std;

const int m=50;

class ITEMS{
	int itemCode[m];
	float itemprice[m];
	int count;
	public:
		void CNT(void)
		{
			count = 0;
		}
		void getitem(void);
		void displaySum(void);
		void remove(void);
		void displayItems(void);
};
void ITEMS :: getitem(void)
{
	cout<<"Enter item code  :";
	cin>>itemCode[count];
	cout<<"Enter item Price  :";
	cin>>itemprice[count];
	count++;
}
void ITEMS :: displaySum(void)
{
	float sum = 0;
	for (int i = 0; i<count; i++)
		sum = sum + itemprice[i];
		
	cout<<"\n Total value  : "<<sum<<endl;
}
void ITEMS :: remove(void)
{
	int a;
	cout<<"Enter item code  : ";
	cin>>a;
	for (int i=0; i<count; i++)
		if(itemCode[i] == a)
					   itemprice[i] = 0;
}
void ITEMS :: displayItems(void)
{
	cout<<" \n Code Price \n ";
	for(int i=0; i<count; i++)
	{
		cout<<"\n"<<itemCode[i];
		cout<<"  "<<itemprice[i];
	}
	cout<<"\n";
}

int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do 
	{
		cout<<endl<<"You can do the following ;" << "Enter appropriate number"<<endl;
		cout<<endl<<"1. Add an item ";
		cout<<endl<<"2. Display total value ";
		cout<<endl<<"3. Delete an item ";
		cout<<endl<<"4. Display all items ";
		cout<<endl<<"5. Quit ";
		cout<<"============**********============";
		cout<<endl<<" What is your option? ";
		
		cin>>x;
		switch(x)
		{
			case 1:
				order.getitem();
				break;
			case 2:
				order.displaySum();
				break;
			case 3:
				order.remove();
				break;
			case 4:
				order.displayItems();
				break;
			case 5:
  				break;
			default:
				cout<<"Error in input; try again \n";
		}
	}
		while(x!=5);
		
return 0;
}
