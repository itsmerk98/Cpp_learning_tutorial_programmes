#include<iostream>
using namespace std;

class test {
	private:
		int code;
		static int count;
	public:
		void setcode(void)
		{
			code = ++count;
		}
		void showcode(void)
		{
			cout<<"Objedt number : "<<code<<endl;
		}
		static void showcount(void)
		{
			cout<<"Count : "<<count<<endl;
		}
};
int test :: count;
int main()
{
	test t1,t2,t4;
	
	t1.setcode();
	
	test :: showcount();
	
	t2.setcode();
	
	test :: showcount();
	
	t4.setcode();
	
	test :: showcount();
	
	test t3;
	
	t3.setcode();
	
	test :: showcount();
	
	t1.showcode();
	t2.showcode();
	t4.showcode();
	t3.showcode();
	
	
return 0;
}
