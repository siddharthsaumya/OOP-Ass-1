#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;
class emp{
	public:
		int id;
		string name;
		int age;
		int bs;
};
int i,j,n;
  emp list[100];
  int gross(int i){
int hr,da,gs;
da = (4 * list[i].bs)/5;
hr = list[i].bs/10;
gs = list[i].bs + hr + da;
return gs;
}
int main(){
system("cls");
cout<<"Enter number of employee you want to create database of : ";
cin>>n;
for(i=0;i<n;i++){
	 cout<<"\nEnter the data for employee number "<<i+1<<endl;
	  cout << "Enter id: ";
    cin >> list[i].id;
    cout << "Enter Full name: ";
    cin>>list[i].name;	
    cout << "Enter age: ";
    cin >> list[i].age;
       cout << "Enter Basic Salary: ";
    cin >> list[i].bs;
}
system("cls");
cout<<"\nPresenting the data in tabular form:"<<endl;
cout<<"\n\nId\tName\tAge\tBasic Salary\tGross Salary"<<endl;
	 cout<<"-----------------------------------------------------\n"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<list[i].id<<"\t"<<list[i].name<<"\t"<<list[i].age<<"\tRs. "<<list[i].bs<<"\t\tRs. "<<gross(i)<<"\n";
    }
	return 0;
}
