// #include<iostream>
// using namespace std;

// class Demo {
//     int x;

// public:
//     Demo(int a) {  // public constructor
//         x = a;
//     }

//     void show() {
//         cout << "Value of x: " << x << endl;
//     }
// };

// int main() {
//     Demo d1(10);  // works now
//     d1.show();    // prints the value
//     return 0;
// }


#include<iostream>
using namespace std;

class Point{
    private:
     int x;
     int y;

    public:
     Point(int a, int b):x(a),y(b){
        cout<<"Point initialized with x = " << x<<" and y = "<<y<<endl;
     }
};
int main(){
    Point p1(3,4);
    return 0;
}