#include <iostream>
using namespace std;

typedef int F(void); // type F is "function with no parameters
                     // returning int"
                     // void can be omitted.
F f, g; // f and g both have type compatible with F
//F f { /* ... */ } // WRONG: syntax/constraint error
//F g() { /* ... */ } // WRONG: declares that g returns a function
int f(void) { /* ... */ } // RIGHT: f has type compatible with F
int g() { /* ... */ } // RIGHT: g has type compatible with F
F *e(void) { /* ... */ } // e returns a pointer to a function
int (*fp)(void); // fp points to a function that has type F
F *Fp; //Fp points to a function that has type F

void test(F fun) { // 等价于void test(int fun(void))。注意不要写成void test(int(void) fun)，这是错误语法编译无法通过！
                   // 函数类型直接定义的变量无法赋值，但是却可以作形参，这确实有点奇怪……
    cout << fun() << endl;
}

int main() {
    // F h = [](){return 42;} // WRONG: error: function 'h' is initialized like a variable
    F *pt = [](){return 42;}; // RIGHT. 不能直接给函数类型定义的变量赋值但是可以给函数指针赋值。
    cout << pt() << endl; // 函数指针和函数类型可以自动隐式类型转换，直接用指针调用是可以的。
    test(pt); // RIGHT
    test([](){return 42;}); // RIGHT
    test(*pt); // RIGHT
}
