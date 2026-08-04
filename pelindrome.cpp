#include<iostream>
using namespace std;
int main()
{
int a,c,reva=0;
cout<<"enter the number=";
cin>>a;
c=a;
while(a>0)
{
int b=a%10;
a/=10;
reva=reva*10+b;
}
if(reva==c)
cout<<"pelindrome";
else
cout<<"not pelindrome";
}
