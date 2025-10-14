#include<iostream>
using namespace std;
class A{
	public:
		void displayA() {
			cout<<"class A"<<endl;
		}
};
class B {
	public:
		void displayB() {
			cout<<"class B"<<endl;
		}
};
class C:public A,public B {
	public:
		void displayC() {
			cout<<"class C"<<endl;
		}
};
int main()
{
	C c;
	c.displayA();
	c.displayB();
	c.displayC();
	return 0;
}
