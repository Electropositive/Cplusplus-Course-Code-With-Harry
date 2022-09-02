#include <iostream>
using namespace std;

// creating a datatype and giving it a name 'ep'
// typedef struct employee
// {
//     int eId;
//     char favChar;
//     float salary;
// } ep;

// a user-defined type 
//in which all members share the same memory location
// union money
// {
//     int rupee;
//     int dollars;
//     int pounds;
// };


int main () {
    /*****Structures******/
    // creating employee name and details
    // ep edison;
    // struct employee rohan;
    // struct employee pankaj;

    // inserting value in structure
    // edison.eId = 0;
    // edison.favChar = 'p';
    // edison.salary = 500;

    // printf("%d\n%c\n%f" , edison.eId, edison.favChar, edison.salary);

    /*****Union******/
    // inserting value in a union
    // union money car;
    // car.dollars = 10000;
    // car.pounds = 1500000;

    // once a time only one of pounds/dollars/rupee can be used
    //here pounds will be used , printing dollar will give garbage

    // printf("%d", car.pounds);
    
    /*****ENUM******/
    //enables for a variable to be a set of predefined constants

    // enum Meal { breakfast, lunch, dinner};
    // Meal tea = breakfast;
    // Meal paneer = lunch;
    // Meal khichdi = dinner;

    // printf("%d\t%d\t%d", tea, paneer, khichdi);
    
    return 0;
}