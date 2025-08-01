#include<iostream>
using namespace std;
int main(){
int a=10,b=20,c=30;
int *pa=&a;
int *pb=&b;
int *pc=&c;
 cout << "Original:\n";
    cout << "a: " << *pa << " at " << pa << "\n";
    cout << "b: " << *pb << " at " << pb << "\n";
    cout << "c: " << *pc << " at " << pc << "\n";
int temp;
temp=*pa; *pa=*pb; *pb=temp;
temp=*pb; *pb=*pc; *pc=temp;
    
}