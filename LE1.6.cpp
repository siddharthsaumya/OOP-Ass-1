#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double sum = 0, a;
    int n, i;
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; ++i) 
	{
        a = 1 / pow(i, i);
        sum += a;
    }
    cout << " The sum of the above series is: " << sum << endl;
    return 0;
}
