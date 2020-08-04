#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;
class book{
	public:
		string author;
		string title;
		float price;
};

int main () 
{ 
int n;
 book one;
    cout << "Enter author name: ";
    cin>>one.author;	
    cout << "Enter title: ";
    cin >> one.title;
        cout << "Enter price: ";
    cin >> one.price;
system("cls");
    cout << "\nEnter the number of books you want to buy : ";
cin>>n;
system("cls");
cout<<" Here is your bill:\n\n  Title --> "<<one.title<<"\n  Author --> "<<one.author<<"\n  No. of items --> "<<n<<"\n  Total price --> "<<one.price*n<<"\n\n"<<endl;
    return 0;
}

