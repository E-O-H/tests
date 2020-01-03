#include <iostream>

struct Base {
    void fun() {
        std::cout << "non-virtual helper: " 
                  << nonvirtual_helper() 
                  << std::endl;
        std::cout << "virtual helper: " 
                  << virtual_helper() 
                  << std::endl;
    }
    int nonvirtual_helper() {
        return 0;
    }
    virtual int virtual_helper() {
        return 0;
    }
};

struct Derived : public Base {
    int nonvirtual_helper() {
        return 1;
    }
    int virtual_helper() {
        return 1;
    }
};

int main() {
    Derived d;
    d.fun(); // 0 1
    Derived* d_p = new Derived;
    d_p->fun(); // 0 1
    Base* b_p = new Derived;
    b_p->fun(); // 0 1
    // Note the results are the same. For non-virtual helper, the method in Base will always be invoked.
    // This is because the Derived class does not have its own fun() method,
    // so when invoking fun() on a Derived object, the compiler implicitly static_cast the object/pointer
    // to the type of their Base class (test in https://cppinsights.io/ to see it clearly),
    // so that the method in the Base class could be invoked. Thus the this pointer passed to fun()
    // is also a pointer to the Base class, and dynamic dispatch works on it for virtual helper functions called with it.
    //////////////////
    // If you instead copy fun() to the Derived class, result will be 1 1; 1 1; 0 1;
    // If you copy fun() to Derived class, but make it a virtual method, result will be 1 1; 1 1; 1 1;
}
