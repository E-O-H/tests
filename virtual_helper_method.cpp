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
    // Note the results are the same.
    // For non-virtual helper, the method in Base will always be invoked.
}
