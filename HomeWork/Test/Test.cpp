#include <iostream> 
using namespace std;

int main()
{
	int a = 10;
	int* p = &a;
	int& r1 = *p;
	int* (&r2) = p;
	

	cout << p << endl;
	cout << r1 << endl;
	cout << &r1 << endl;
	cout << &a << endl;
	cout << r2 << endl;

}
