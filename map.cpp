#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m.insert(make_pair("asd", 4));
    m.insert(make_pair("adsd", 3));//make_pair����ͨ����ģ�壬����ʡ�������Զ��ƶ�
    m.insert(pair<string, int>("ab", 2)); //pair����ģ��pair�Ĺ��캯������ģ�治����ʡ������
    m.insert({{"a", 1},
              {"ddd", 5}});
    for (map<string, int>::iterator i = m.begin(); i != m.end(); ++i) cout<<i->first<<' '<<i->second<<endl; //����дi < m.end()�� operator< undefined
}
