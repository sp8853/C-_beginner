#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
cout<<"\n We are inside the function";
if((x-y)!=0)
{
int R=z/(x-y);
cout<<"\n Result="<<R;
}
else
{
throw(x-y);
}
}
int main()
{
try
{
cout<<"\n We are inside the try block";
divide(10,20,30);
divide(10,10,30);
}
catch(int i)
{
cout<<"\n Caught the exception:"<<i;
}
return 0;
}

Send message to Public Chat


CSE202-Lecture by : 17688:Richa Jain ( K21YKCSE202 )


Slide content start Example #nclude <iostream.h> void divide(int x, int y, int z) { cout<<“We are inside the function”; If((x-y)!=0) { int R= z/(x-y); cout<<“Result=“<<R; } else { throw(x-y); } } int main() { try { cout<<“We are inside the try block”; divide(10,20,30); divide(10,10,20); } catch(int i) { cout<<“caught the exception”; } return 0; } Slide content end



