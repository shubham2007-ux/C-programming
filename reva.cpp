#include<iostream>
using namespace std;
int main()
{
int a,reva;
cout<<"enter the number=";
cin>>a;
cout<<reva;
while(a>0)
{
int b=a%10;
a/=10;
reva=reva*10+b;
}
cout<<"reva:"<<reva;
}

