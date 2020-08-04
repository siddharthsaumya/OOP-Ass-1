#include <iostream>
using namespace std;
int main()
{
    int low, high, i, flag,r;
    cout << "Enter higher number: ";
	cin>> high;
low=high-10;
    while (low < high)
    {
        flag = 0;

        for(i = low/2; i >= 2; --i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
		r=low;
    }
        ++low;
    }
    cout <<"Last prime number before "<<high<< " is "<< r<<endl;

    return 0;
}
