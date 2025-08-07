#include<iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int a) {  // public constructor
        x = a;
    }

    void show() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Demo d1(10);  // works now
    d1.show();    // prints the value
    return 0;
}
