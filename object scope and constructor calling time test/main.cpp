#include <iostream>
using namespace std;
class te
{public:
te(int);
void print()
{
    cout<<a<<endl;
}
private:
int a;};
te z(1);
int main()
{cout<<"begin"<<endl;
    te x(2);
    extern te y;
    x.print();
    y.print();
    z.print();
cout<<"end"<<endl;
}
te y(3);
te::te(int aa)
{
a=aa;
print();
}
