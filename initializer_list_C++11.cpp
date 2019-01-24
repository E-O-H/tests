// Demonstrate initilizer list in C++ 11

#include <iostream>
#include <initializer_list>

class T {
    public:
    T(std::initializer_list<int> init) {
        for (auto it = init.begin(); it != init.end(); ++it) {
            std::cout << *it;
        }
    }
    T(){}
    void fun(std::initializer_list<int> init) {
        for (auto it = init.begin(); it != init.end(); ++it) {
            std::cout << *it;
        }
    }
};

class T2 { // test override
    public:
    T2(int a, int b) {std::cout << a << b;}
    T2(std::initializer_list<int> list)  {auto it = list.end(); std::cout << *--it; std::cout << *--it;}
    // comment out the second constructor, then it will use the first for two element list
};

int main()
{
  T{1,2,3,4};     // Can use braced initialization for constructor
  T a{1,2,3};     // ditto
  a.fun({1,2});   // for normal functions, parenthesis is still needed
  std::cout << std::endl;

  // test override
  T2{8, 9};
  std::cout << std::endl;

  // test warning narrowing conversion
  int x(3.3);
  int y{3.3};
  std::cout << x << y;
}
