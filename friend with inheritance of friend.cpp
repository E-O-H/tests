#include <iostream>
class C;
class Base {
    virtual int a() {
        return 3;
    }
    friend C;
};
class Derived : public Base {
              // NOTE if there is no public, 
              // compiler will give error "inaccessable base"!
              // (The fact that we used it through a friend of base does not change the error!)
    int a() {
        return 4;
    }
};
class C {
    public: virtual void p(Base b) {
        std::cout << b.a();
    }
};
class D : public C {
    ////// Following code does not compile, even if it is a virtual function!
    // public: void p(Base b) {
    //    std::cout << b.a();
    // }
};
