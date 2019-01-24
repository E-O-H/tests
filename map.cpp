#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m.insert(make_pair("asd", 4));
    m.insert(make_pair("adsd", 3));//make_pair是普通函数模板，可以省略类型自动推断
    m.insert(pair<string, int>("ab", 2)); //pair是类模版pair的构造函数，类模版不可以省略类型
    m.insert({{"a", 1},
              {"ddd", 5}});
    for (map<string, int>::iterator i = m.begin(); i != m.end(); ++i) cout<<i->first<<' '<<i->second<<endl; //不能写i < m.end()， operator< undefined
}
