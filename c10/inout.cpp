#include <iostream>
using namespace std;

int add ( int x, int y );

int mainInout()
{
  int a, b;
  
  cout<<"두 숫자 입력: ";
  cin>> a >> b;

  cout<<"합: "<< add ( a, b ) <<"\n";
}

int add( int x, int y )
{
  return x + y;
}
