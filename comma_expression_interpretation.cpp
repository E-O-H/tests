// Comma expression is invented mainly for for-loop.
// So in other places, if there is another interpretation, comma expression is never the favored interpretation.
#include <iostream>
using namespace std;

int fun(int a) {
    return a;
}

int fun(int a, int b) {
    return a + b;
}

int main() {
    cout << fun(3, 4) << endl;
    cout << fun((3, 4)) << endl;
}
