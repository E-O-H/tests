#include <cstdio>
//C++��Ƕ���಻��������ʵ������ϵ����C++Ƕ���඼�Ǿ�̬�ġ�����ҪOuter classʵ������ֱ�ӵ���Inner class��
//JavaǶ������Լӹؼ��֣�Ĭ�ϲ���static��Ҫinner class������static�����ƾ�̬��Ա�;�̬���������ܲ���outer class��ʵ������inner class��
class Outer {
    public:
    class Inner {
    };
};

int main() {

    Outer::Inner *a = new Outer::Inner();

}
