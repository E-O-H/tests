#include <iostream>

template<typename T>
void fun(T a) {
    a.x(); 	// Enjoy your freedom in C++. In java generics you would have to specify <T extends ClassName> to be able to use methods in ClassName.
			// 这种“duck type”在C++中是可以的，因为C++模版是最原始的替换实现，编译时所有使用情况的类型就都确定了，
			//但是缺点是: 1) 要依赖于使用者代入正确的类型，编译系统不会知道这里的T需要什么类型，如果代入了没有x()方法的类型编译时会报错
			//            2) 模版本身不能编译为“实体”，所以模版的声明和实现也不能分离，也就是说模版中的实现代码（函数代码）不能单独编译，也就没法封装具体实现。
    T *b = new T(a); // Also this is ok. But in java you cannot do this without using reflection or getClass() on the a object; or you can
                     // use builder of T type (provided T has a builder method).
}

int main() {

}
