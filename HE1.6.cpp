//1 +11 + 111 + 1111 + ..
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int bs=1,n1=0,i,n;
	cout<<"Enter the value of n : ";
	cin>>n;
i=0;
bs=1;
while(i<n ){
	n1 = bs  +n1;
	bs=bs*10;
	bs++;
	i++;
}
cout<<"\nSum will be "<<n1;	
	return 0;
}
