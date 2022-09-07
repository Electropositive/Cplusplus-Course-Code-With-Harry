#include <iostream>
using namespace std;

int sum(int a, int b) {
    int c = a + b;
    return c;
};

// This will not swap a and b.
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
};

// Call by reference using pointers
// This will swap a and b. this will swap the value at address of a and b
void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
};

// Call by reference using C++ refrence variable
// This will swap a and b. this will swap the value at address of a and b
void swapReferenceVar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
};

int main () {
    
    int x = 4, y = 3;
    // cout<<"The sum of 4 and 3 is: "<<sum(x, y)<<endl;

    //swapping variables
    cout<<"Initially the value of x and y was: "<<x<<" and "<<y<<" respectively."<<endl;

    // swap(x, y); // This will not swap a and b.

    // swapPointer(&x, &y); // This will swap a and b using pointers.

    swapReferenceVar(x, y); // This will swap a and b using reference variable.

    cout<<"Finally the value of x and y is: "<<x<<" and "<<y<<" respectively."<<endl;


    return 0;
};