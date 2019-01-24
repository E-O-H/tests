#include <cstdio>
//C++的嵌套类不与外层类的实例相联系，即C++嵌套类都是静态的。不需要Outer class实例化，直接调用Inner class。
//Java嵌套类可以加关键字，默认不是static，要inner class声明成static（类似静态成员和静态方法）就能不用outer class的实例调用inner class。
class Outer {
    public:
    class Inner {
    };
};

int main() {

    Outer::Inner *a = new Outer::Inner();

}
