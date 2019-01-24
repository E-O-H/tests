class Outer {
    void run() {
        Inner::fun();
    }
    class Inner {
        private:
        static void fun() {};
    };
};
