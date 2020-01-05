#include <iostream>
class Base {
    virtual int a() {
        return 3;
    }
    friend void fun(Base*);
    ///// But if we write the following instead, it will not work, because friend is not inherited to child class!
    // class Derived;
    // friend void fun(Derived*);
};
class Derived : public Base {
              // NOTE if there is no public, 
              // compiler will give error "inaccessable base"!
              // (The fact that we used it through a friend of base does not change the error!)
    int a() {
        return 4;
    }
};
void fun(Base* x) {
    std::cout << x->a();
}
int main() {
    Derived o;
    fun(&o); // 4
}
