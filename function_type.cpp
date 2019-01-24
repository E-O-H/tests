#include <iostream>
using namespace std;

typedef int F(void); // type F is "function with no parameters
                     // returning int"
                     // void can be omitted.
F f, g; // f and g both have type compatible with F
//F f { /* ... */ } // WRONG: syntax/constraint error
//F g() { /* ... */ } // WRONG: declares that g returns a function
int f(void) { /* ... */ } // RIGHT: f has type compatible with F
int g() { /* ... */ } // RIGHT: g has type compatible with F
F *e(void) { /* ... */ } // e returns a pointer to a function
int (*fp)(void); // fp points to a function that has type F
F *Fp; //Fp points to a function that has type F

void test(F fun) { // �ȼ���void test(int fun(void))��ע�ⲻҪд��void test(int(void) fun)�����Ǵ����﷨�����޷�ͨ����
                   // ��������ֱ�Ӷ���ı����޷���ֵ������ȴ�������βΣ���ȷʵ�е���֡���
    cout << fun() << endl;
}

int main() {
    // F h = [](){return 42;} // WRONG: error: function 'h' is initialized like a variable
    F *pt = [](){return 42;}; // RIGHT. ����ֱ�Ӹ��������Ͷ���ı�����ֵ���ǿ��Ը�����ָ�븳ֵ��
    cout << pt() << endl; // ����ָ��ͺ������Ϳ����Զ���ʽ����ת����ֱ����ָ������ǿ��Եġ�
    test(pt); // RIGHT
    test([](){return 42;}); // RIGHT
    test(*pt); // RIGHT
}
