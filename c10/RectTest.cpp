#include <iostream>

using namespace std;

class Rect {
    int width, height;
  public:
    void set_values (int,int);
    int area(void);
} rect;

int main()
{
	cout << rect.area() << "\n";
	
}
