#include <iostream>
using namespace std;
int main()
{
    int i,j,num,p;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"All Prime Factors of "<<num<<" are: "<<endl;

    for(i=2; i<=num; i++)
    {
    if(num%i==0){
p = 1;
for(j=2;j<=i/2;j++){
    if(i%j==0)
    {
p = 0;
break;
} }
   if(p==1)
    {
    cout<<i<<" ";
        }
        }
    }

    return 0;
}
