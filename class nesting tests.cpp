#include <iostream>
using namespace std;

class Outer {
public:
    int a;
    static int b;
    Outer():a(3) {}
    class Inner {
      public:
      void fun() {
        //cout << "Inner Before: a = " << a << endl; //与Java不同，C++嵌套类不能调用外层类的非静态数据成员，因为没有外层类实例对象相联系
        //a = 4;                                     //但是C++11增加了允许调用“外层类成员的类型”，即如果调用"sizeof a”在C++11中是允许的
        //cout << "Inner After: a = " << a << endl;

        cout << "Inner Before: b = " << b << endl;
        b = 30;
        cout << "Inner After: b = " << b << endl;
      }
    };
};
int Outer::b = 20;

int main() {
    //test1
    Outer out;
    Outer::Inner in;
    in.fun();
    cout << "Outer: a = " << out.a << endl;
    cout << "Outer: b = " << Outer::b << endl;

    //test2
    static int c = 100;
    const int d = 1000;
    class C {
      public: void fun() {
         cout << "Inner Before: c = " << c << endl;
         c = 200; // Inner class in function can only access static or const variable in the function.
                  // Note that in contrast, java does not support static local variable, and you can only access final local variable,
                  // so you cannot modify a locally defined variable in inner class
                  // (But you can modify a field of the outer class containing the outer function (no matter static or not),
                  // or you can modify the value a local reference points to, but the reference itself has to be final).
         cout << "Inner After: c = " << c << endl;
         cout << "Inner: d = " << d << endl;
      }
    };
    C cObj;
    cObj.fun();
    cout << "c = " << c << endl;
}
