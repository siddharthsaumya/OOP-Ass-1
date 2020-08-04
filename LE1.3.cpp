#include <iostream>
#include <cmath>
using namespace std;
int main() {

    float a, b, c, x1, x2, d, real, imaginary;
    cout <<"Enter coefficients of x^2, x and 1: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different :"<< "\nRoot 1 = " << x1 << "\nRoot 2 = " << x2 << endl;
    }
    
    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(d)) / (2*a);
        cout << "Root = " << x1 << endl;
    }

    else {
        real = -b/(2*a);
        imaginary =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real << "+" << imaginary << "i" << endl;
        cout << "x2 = " << real << "-" << imaginary << "i" << endl;
    }

    return 0;
}
