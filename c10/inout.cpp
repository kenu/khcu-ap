#include <iostream>
using namespace std;

int add ( int x, int y );

int mainInout()
{
  int a, b;
  
  cout<<"�� ���� �Է�: ";
  cin>> a >> b;

  cout<<"��: "<< add ( a, b ) <<"\n";
}

int add( int x, int y )
{
  return x + y;
}
