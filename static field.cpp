#include <iostream>
using namespace std;

class A {
public:
static int b;
};

int A::b = 3; // �������������ʼ�����ұ����ʼ�������ܲ�����ʼ����ֱ����main�����и�ֵ
              // ע���ʼ���﷨�������ͣ��൱�ڶ���ȫ�ֱ�����ֻ������������
// There is an exception: static const primative-type members can be initialized within the class.
// In C++17 you can also use inline variables to initialize static member within the class, but it introduces a guard variable overhead.

int main() {
cout << A::b;
}
