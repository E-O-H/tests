// Type your code here, or load an example.
#include <iostream>

void fun() {
    throw int();
}

class A {
    public:
    ~A() {
        try {
            fun();
        } catch(int) {
            // If the int exception is not caught inside the destructor like this,
            // the program will terminate once the float exception is thrown.
            std::cout << "caught int" << std::endl;
        }
    }
};

int main() {
    try {
        A a;
        throw float();
    } catch (float) {
        std::cout << "caught float" << std::endl;
    }
}