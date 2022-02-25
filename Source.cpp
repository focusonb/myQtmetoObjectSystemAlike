#include <iostream>
using namespace std;
template<typename T>
struct type
{
	static const char* mtype ;
};
template<typename T>
const char* type<T>::mtype = "78678";

template <>
struct type<int>
{
	static const char* mtype ;
};

const char* type<int>::mtype ="werew" ;

int main()
{
	cout << type<int>::mtype << endl;
	return 0;
}