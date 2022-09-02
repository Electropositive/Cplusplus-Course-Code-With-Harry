#include <iostream>
using namespace std;

// Function prototype
// syntax ---> function-name (arguments);
// gives assurity that required function is present int the code

// int sum(int a, int b); // -- Acceptable
// int sum(int a, b); // -- Not Acceptable
int sum(int, int); // -- Acceptable

// void g(void); acceptable//
void g ();

int main () {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("\n");

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n");

    // num1, num2 are actual parameters
    printf("The sum is: ");
    printf("%d", sum(num1, num2));

    g();

    return 0;
}

// defining a function
int sum(int a, int b) {
    // Formal Paramertes, a and b will be taking values 
    // from actual parameters num1 and num2
    int c = a+b;
    return c;
}

// void functions 
void g() {
    printf("This is a greeting messge!");
}
