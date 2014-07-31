#include<iostream.h>
void add(int p,int q)
{
  this=p+q;
  cout<<this;
}

void sub(int p,int q)
{
  this=p-q;
  cout<<this;
}
void main()
{
  cout<<"This is a calculator !!"<<endl;
  cout<<"Addition:";
  add(4,8);
  cout<<"\n";
  cout<<"Subtraction: ";
  sub(8,4);
}
