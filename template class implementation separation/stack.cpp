#include <iostream>
#include "stack.hpp"

template <typename Type> stack<Type>::stack() {
        std::cerr << "Hello, stack " << this << "!" << std::endl;
}

template <typename Type> stack<Type>::~stack() {
        std::cerr << "Goodbye, stack " << this << "." << std::endl;
}
template class stack<int>; // Explicit template class instantiation.
                           // C++模版类定义本身不会编译产生任何代码，而是根据模版类在各处的使用情况，分别编译产生相应的具体类型的类代码。
                           // 要分离实现，编译产生int类型的具体类实现，给其他文件使用，必须要手动explicit实例化模版类，才能编译产生具体的类。
                           // （如果模版类是作为API使用，事先不知道使用的类型，就不能这样，只能把模版类的实现代码写在头文件中，由用户包括进去。）
