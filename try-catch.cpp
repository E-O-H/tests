#include <iostream>
using namespace std;
void f() {
    cout<<"f1\n";
    throw 'f';
    cout<<"f2\n";
}

int main() {
    try {
        for (int i = 0; i < 5; ++i) {
            cout<<"1\n";
            f();
            cout<<"2\n";
        }
    } catch (char s) {
        cout<<"caught"<<s<<endl;
    }
}
