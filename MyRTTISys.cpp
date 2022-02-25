#include "MyRTTISys.h"
#include <iostream>
using std::cout;
using std::endl;
RTTICLASS(Base)
{ 
	GETTYPE
public: 
	int a; 
};
RTTICLASS(Derived):public Base
{
	GETTYPE
public:
	int b;
};

int main()
{
	Base* d = new Derived;
	Derived od;
	cout << TYPEOF(d) << endl;
	cout << TYPEOF(od) << endl;

	Base* b = new Base;
	Base ob;
	cout << TYPEOF(b) << endl;
	cout << TYPEOF(ob) << endl;
	return 0;
}