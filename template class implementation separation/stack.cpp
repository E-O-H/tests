#include <iostream>
#include "stack.hpp"

template <typename Type> stack<Type>::stack() {
        std::cerr << "Hello, stack " << this << "!" << std::endl;
}

template <typename Type> stack<Type>::~stack() {
        std::cerr << "Goodbye, stack " << this << "." << std::endl;
}
template class stack<int>; // Explicit template class instantiation.
                           // C++ģ���ඨ�屾�����������κδ��룬���Ǹ���ģ�����ڸ�����ʹ��������ֱ���������Ӧ�ľ������͵�����롣
                           // Ҫ����ʵ�֣��������int���͵ľ�����ʵ�֣��������ļ�ʹ�ã�����Ҫ�ֶ�explicitʵ����ģ���࣬���ܱ������������ࡣ
                           // �����ģ��������ΪAPIʹ�ã����Ȳ�֪��ʹ�õ����ͣ��Ͳ���������ֻ�ܰ�ģ�����ʵ�ִ���д��ͷ�ļ��У����û�������ȥ����
