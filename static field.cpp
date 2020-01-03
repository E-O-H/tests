#include <iostream>
using namespace std;

class A {
public:
static int b;
};

int A::b = 3; // 必须在类体外初始化，且必须初始化，不能不经初始化就直接在main函数中赋值
              // 注意初始化语法带有类型，相当于定义全局变量，只不过绑定在类中
// There is an exception: static const primative-type members can be initialized within the class.
// In C++17 you can also use inline variables to initialize static member within the class, but it introduces a guard variable overhead.

int main() {
cout << A::b;
}
