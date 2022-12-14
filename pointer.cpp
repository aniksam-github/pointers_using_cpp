#include<iostream>
using namespace std;

int main(){

    // what is pointer ----> pointer is a datatype which holds the address 
            // of other datatypes.

    int a = 10;
    int* b = &a;

    // & ----> (address of) operator
    cout<<"the address of a is: ->" << &a << endl;
    cout<<"the address of a is: ->" << b << endl;

    // * ----> (value at ) Dereference operator
    cout<<"the value at address of b is: ->" << *b << endl;
    


    //! Pointer to pointer 
    
    int** c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of b is " << c << endl;

    cout << "the value at address c is " << *c << endl;
    cout << "the value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}
