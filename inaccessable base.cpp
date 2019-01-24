#include <string>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class Base {};

class Sub : Base {
public:
    int a;
};
int main(){
    Base *p = new Sub;
    p->a = 3;
    cout << p->a;
}
