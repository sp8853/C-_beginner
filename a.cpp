 #include<iostream>
using namespace std;
class rectangle
{
protected:
int l,w;
public:
void get()
{
cin>>l>>w;
}
};
class square
{
public:
int side;
void getdata()
{
cin>>side;
}
};
class circle
{
protected:
int r;
public:
void getc()
{
cin>>r;
}

};
class area:public rectangle, protected square, public circle
{
public:
void area_r()
{
get();
cout<<l*w<<endl;
getc();
cout<<3.14*r*r<<endl;
}
void ar()
{
getdata();
cout<<side*side;
}
};
int main()
{
area A;
A.area_r();
A.ar();
}