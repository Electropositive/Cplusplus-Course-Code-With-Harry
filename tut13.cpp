#include <iostream>
using namespace std;

int main () {
    int marks[] = {34, 23, 13, 54};

    int MathMarks[4];
    MathMarks [0] = 18;
    MathMarks [1] = 13;
    MathMarks [2] = 12;
    MathMarks [3] = 14;

    cout<<"These are Math Marks"<<endl;
    // printf("%d\n", MathMarks[0]);
    // printf("%d\n", MathMarks[1]);
    // printf("%d\n", MathMarks[2]);
    // printf("%d\n", MathMarks[3]);

    // printing array using for loop
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", MathMarks[i]);
    }

    cout<<endl;

    cout<<"These are Marks"<<endl;
    marks[2] = 5; // You can change value of array
    // printf("%d\n", marks[0]);
    // printf("%d\n", marks[1]);
    // printf("%d\n", marks[2]);
    // printf("%d\n", marks[3]);

    // printing array using for loop
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\n", marks[i]);
    // }
    
    // printing array using for While loop
    // int i = 0;
    // while (i<4)
    // {
    //     printf("%d\n", marks[i]);
    //     i++;
    // }
    
    // printing array using for do-While loop
    int i = 0;
    do
    {
        printf("%d\n", marks[i]);
        i++;
    } while (i<4);
    
    printf("\n");

    printf("**************Pointers and Arrays************\n");
    /* In arrays the first value is taken by the pointer and the all other value by successive p
    and value of first block is the address of that block followed by this equation
    Address(new) = Address(current) + i*(size of data type, integer = 4 and likewise)
    
    */

    int *p = marks;// creating a pointer pointing towards marks

    cout<<"The value of *p at [0] is: "<<*p<<endl;
    cout<<"The value of *(p+1) at [1] is: "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) at [2] is: "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) at [3] is: "<<*(p+3)<<endl;



    return 0;
}

/*
Escape Sequence

\n ---> Newline. Position the cursor at the beginning of the next line.

\t ---> Horizontal tab. Move the cursor to the next tab stop.

\a ---> Alert. Produces a sound or visible alert without changing the current cursor position.

\\ ---> Backslash. Insert a backslash character in a string.

\'' ---> Double quote. Insert a double-quote character in a string.
*/
