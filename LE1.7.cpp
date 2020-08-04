#include<iostream>
using namespace std;
int main()
{
int arr[50],n,l,s;
cout<<"\nEnter the size of elements : ";
cin>>n;
cout<<"\nInput the numbers : ";
for(int i=0;i<n;i++) {
	cin>>arr[i];
}
for(int i=0;i<n;i++)
{
if(arr[i]>l) {
	l=arr[i];
	}
else if(arr[i]<s) {
	s=arr[i];
	}
}
cout<<"\nThe smallest element is "<<s<<endl;
cout<<"\nThe largest element is "<<l<<endl;
return 0;
}
