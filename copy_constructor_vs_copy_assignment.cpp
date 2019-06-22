#include <iostream>
#include <string>
using namespace std;
class A {
    public:
    int a;

    A() : a(0) { cout << "default_ctor" << endl;}
    A(int a) : a(a) {}
    A(A const& o) : a(o.a) {
        cout << "copy_ctor" << endl;
        }
    A& operator=(A const& o) {
        this->a = o.a;
        cout << "assignment" << endl;
        return *this;
    }
};

int main()
{
  A a(2);
  
  A b = a; // copy constructor (!)
  A c;     // default constructor
  c = a;   // copy assignment
}
