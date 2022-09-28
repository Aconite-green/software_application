#include <iostream> 
using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();    
};


Circle::Circle(){
    radius = 1;
    cout << "radius" << radius << "make circle" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "radius" << radius << "make circle" << endl;    
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}