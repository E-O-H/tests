#include <iostream>
using namespace std;

class A {
public:
static int b;
};

int A::b = 3; // �������������ʼ�����ұ����ʼ�������ܲ�����ʼ����ֱ����main�����и�ֵ
              // ע���ʼ���﷨�������ͣ��൱�ڶ���ȫ�ֱ�����ֻ������������

int main() {
cout << A::b;
}
