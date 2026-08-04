#include<iostream>
using namespace std;
int main()
{
int a,c,remainder,result=0;
cout<<"enter three digit number=";
cin>>a;
c=a;
while(c!=0)
{
remainder=c%10;
result += remainder +remainder +remainder;
c/=10;
}
if(result==a)
cout<<a<<"is an armstrong number";
else
cout<<a<<"is not an armstrong number";
}
