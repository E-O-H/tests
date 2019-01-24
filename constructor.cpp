#include <cstdio>

int main() {
    int x1(3);
    //int x2(); // compile error. Same as function pre-declaration.
    int x3;
    int *x4 = new int(4);
    int *x5 = new int();
    int *x6 = new int;
    printf("%d %d %d %d %d", x1, x3, *x4, *x5, *x6);
}
