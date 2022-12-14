// * CALL BY VALUE AND CALL BY REFERENCE 

//! There are two ways to pass value or data to function in C language: 
//! 1. call by value
//! 2. call by reference

//?  Original value is not modified in call by value but it is modified in call by reference.


// Call by value in C++

//& In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. If you change the value of function parameter, it is change for the current function only. It will not change th evalue of  variable inside the caller method such as main().


#include<iostream>
using namespace std;

void change(int data){
    data = 5;
}

int main(){
    int data = 3;
    change(data);
    cout << "value of the data is " << data << endl;
    return 0;
}



//todo   CALL BY REFERENCE 

//? In call by reference, original value is modified becouse we pass reference (address).  Here,  address of the value is passed in the function, so actual and formal arguments share the same address space. Hence, value change inside the function, is reflected inside as well as outside the function.


#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 500, y = 100;

    swap(&x,&y); // passing value to function

    cout << "value of x is: " << x << endl;
    cout << "value of y is: " << y << endl;
    return 0;
}

