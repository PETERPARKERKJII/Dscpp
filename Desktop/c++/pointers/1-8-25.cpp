// #include<iostream>
// using namespace std;
// struct Student{
//     int id;
//     double marks;
// };
// int main(){
//     Student s1; // Create a Point(object)
//     s1.id = 101;
//     s1.marks = 93.5;
//     cout<< "Student id: "<<s1.id<<endl;
//     cout<< "Student marks: "<<s1.marks<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// // namespace physics{
// //     double gravity(){
// //         return 9.8;
// //     }
// // }
// // int main(){
// //     double g= physics :: gravity();
// //     cout << "Acceleration due to gravity is: " << g << " m/s²" << endl;
// //     return 0;
// // }
// // Library1.h
// namespace lib1 {
//     namespace calculate {
//         void show() {
//             std::cout << "lib1::calculate::show()" << std::endl;
//         }
//     }
// }
// // Library2.h
// namespace lib2 {
//     namespace calculate {
//         void show() {
//             std::cout << "lib2::calculate::show()" << std::endl;
//         }
//     }
// }
// #include <iostream>
// #include "Library1.h"
// #include "Library2.h"

// int main() {
//     lib1::calculate::show();  // Calls the show from lib1
//     lib2::calculate::show();  // Calls the show from lib2

//     return 0;
// }