#include <iostream>
using namespace std;

// Multiplication Table
inline int product(int a, int b)
{
    return a*b;
}; // only make a function inline if the work in function is minimal

// int product(int a, int b)
// {
//     static int c = 0;
//     c = c+ 1;
//     return a*b + c;
// };

float moneyRecieved(int currentMoney, float factor = 1.04) {
    return currentMoney*factor;
};

int main () {

    // int a, b;
    // printf("Enter the first number: ");
    // cin>>a;
    // printf("Enter the second number: ");
    // cin>>b;
    // printf("\n");
    // cout<<"The product of first and second number is: "<<product(a,b);
    // cout<<"The product of first and second number is: "<<product(a,b);
    // cout<<"The product of first and second number is: "<<product(a,b);
    // cout<<"The product of first and second number is: "<<product(a,b);
    // cout<<"The product of first and second number is: "<<product(a,b);
    // cout<<"The product of first and second number is: "<<product(a,b);

    int money = 1000;
    cout<<"If you have "<<money<<" INR into your bank account, you will recieve "
    <<moneyRecieved(money)<<" INR after 1 year."<<endl;
    cout<<"For VIP: If you have "<<money<<" INR into your bank account, you will recieve "
    <<moneyRecieved(money, 1.1)<<" INR after 1 year.";


    return 0;
}