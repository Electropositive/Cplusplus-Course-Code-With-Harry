#include <iostream>
using namespace std;

int add(int a, int b) {
    cout<<"Using the function with 2 arguments"<<endl;
    return a+b;
};

int add(int a, int b, int c) {
    cout<<"Using the function with 3 arguments"<<endl;
    return a+b+c;
};

//calculating volume of a cuboid
int volume (int l, int b, int h) {
    return (l * b * h);
};
//calculating volume of a cube
int volume (int a) {
    return (a * a * a);
};
//calculating volume of a cylinder
int volume (int r, int h) {
    return (3.14 * r  * r * h);
};

int main () {

    cout<<"The sum of 3 and 6 is : "<<add(3, 6)<<endl;

    cout<<"The sum of 3, 6 and 7 is : "<<add(3, 6, 7)<<endl;

    cout<<"\nThe volume of a cuboid 3, 6 and 7 is : "<<volume(3, 6, 7);
    cout<<"\nThe volume of a cube 3 is : "<<volume(3);
    cout<<"\nThe volume of a cylinder radius 3 and height 7 is : "<<volume(3, 7);

    return 0;
}