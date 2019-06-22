// Demonstrate of class and struct can be used interchangably.
#include <iostream>
using namespace std;

template <class T>
class A {         // defined as class, r is private
	T r = 3;
};

template <>
struct A<int> {   // defined as struct, r is public
	string r = "aaa";
};


int main() {
	class A<int> a;   // Although I specifically wrote "class" here, 
	                  // it does not stop it from using the specialization defined with "struct"
	cout << a.r;   // outputs "aaa"
	return 0;
}
