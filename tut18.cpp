#include <iostream>
using namespace std;

// Recursion(Reoccurence)
// it is a method to to call itself directly or indirectly

// Example
// int sum(int num)
// {
//     if (num != 0)
//     {
//         return num + sum(num - 1);
//     }
//     return 0;
// };

// int factorial(int n)
// {
//     if (n > 1)
//     {
//         return n * factorial(n - 1);
//     }
//     else
//     {
//         return 1;
//     }
// };

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
};

int main()
{
    // Factorial of a number
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1
    // n! = n*(n-1)!

    // Recursion Example 1

    // int num;
    // cout << "Enter the number : ";
    // cin >> num;
    // cout << "Sum is : " << sum(num);


    // Recursion Example 2

    // int n;
    // printf("\n\tInput a to find its factorial : ");
    // scanf("%d", &n);
    // printf("\n\n\tFactorial for the given number is : ");
    // cout << factorial(n);


    // Recursion Example 3 : Finding n'th term of Fibonacci number

    int n;
    cout << "Enter the number : ";
    cin >> n;
    printf("\n\nThe term in fibonacci sequence at position ");
    cout << n;
    printf(" is ");
    cout << fib(n);
    return 0;

}