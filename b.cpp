#include<iostream>
using namespace std;
class student
{
protected:
int rno;
public:
void get()
{
cin>>rno;
}
};
class test: public student
{
public:
int sum;
int marks[5];
void getm()
{
sum=0;
for(int i=0;i<5;i++)
cin>>marks[i];
for(int i=0;i<5;i++)
sum=sum+marks[i];
}
};
class result:public test
{
protected:
int average;
public:
void geta()
{
cout<<sum/5;
}
};
int main()
{
result r;
r.getm();
r.geta();
}