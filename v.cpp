#include<iostream>
using namespace std;
void test(int ma1, int ma2, int ma3, int ma4, int ma5)
{
int total= ma1+ma2+ma3+ma4+ma5;
try
{
if(total%3==0)
throw total;
else if(total%7==0)
throw 'total';
else if (total%5==0)
throw 1.0f; //float
cout<<"try end";

}
catch(char c) //catch 1
{ cout<<"\ncaught a character";}
catch(int x)
{ cout<<"\ncaught an integer";}
catch(float d)
{ cout<<"\ncaught a float";}

cout<<"\nEnd of try-catch system";
}
int main()
{
int m[5];
cout<<"enter the 5 marks: ";
for(int i=0;i<5;i++)
{
cin>>m[i];
}
test(m[0],m[1],m[2],m[3],m[4]);
}