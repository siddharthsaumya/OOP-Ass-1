#include <iostream>
using namespace std;
int main() {
    int a, b, gcd;
    cout << "Enter two numbers:\n";
    cin >> a >> b;
    if ( b > a) {   
        int temp = b;
        b = a;
        a = temp;
    }
    for (int i = 1; i <=  b; ++i) {
        if (a % i == 0 && b % i ==0) {
            gcd = i;
        }
    }
    cout << "GCD = " << gcd;
    return 0;
}
