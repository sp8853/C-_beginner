#include <iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
try
{
if((a-b)!=0)
{
cout<<a/(a-b);
}
else
{
throw (a-b);
}
}
catch(int x)
{
cout<<"exception caught";
}
}