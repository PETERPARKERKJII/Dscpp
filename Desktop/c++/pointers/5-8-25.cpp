
// class book{
//     public:
//     std::string title;
//     int pages;
// }
// int main(){
//     book mybook;
//     mybook.title="the hobbit";
//     mybook.pages=310;
// }

// book b;
// b.title = "1984";
// b.pages=328;
// std:: cout << b.title  << std::endl;

// book* ptr =new book;
// ptr->title ="c++ primer";
// ptr->pages = 900;
// std::cout << ptr->title << std :: endl;
// delete ptr;

// class BankAccount {
// private:
//         double balace;

// Public:
//     void deposit(double amount){balance += amount;}
//     double getbalance(){return balance;}`       `  


    
// }
#include <iostream>
#include<string.h>
using namespace std;

class Student {
public:
    string name ;
    long roll_no;
};

int main() {
    Student s1;
    

    
    s1.name = "Lakshit";
    s1.roll_no = 2410990521;

    
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.roll_no << endl;

    return 0;
}
