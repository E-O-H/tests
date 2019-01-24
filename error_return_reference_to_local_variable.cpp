#include <iostream>
using namespace std;

class Task {

};

Task* Create(void)
{
    Task task;
    return &task; // This is a warning, "warning: address of local variable 'task' returned".
                  // Although it passed compilation, but this is not meaningful and is dangerous.
}
Task& Create2(void)
{
    Task task;
    return task; // This is a warning, "warning: reference to local variable 'task' returned".
                 // Although it passed compilation, but this is not meaningful and is dangerous.
}

class Test
{
public:
	Test() { cout << "Constructor is executed\n"; }
	~Test() { cout << "Destructor is executed\n"; }
};
int main()
{
	//Test* a = &(Test()); // This is an error, "error: taking address of temporary"
	Test(); // Note destructor is called immediately after this.
	cout << 3;
}
