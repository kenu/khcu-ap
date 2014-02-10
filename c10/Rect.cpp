#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    void set_values (int x, int y) {
      width = x;
      height = y;
   }
    int area() {return width*height;}
};

int mainClass () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}
