#include<iostream>
using namespace std;

class Rectangle{
    int width, height;
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int length);
    bool isSquare();
};

Rectangle::Rectangle() {
    width = height = 1;
}
Rectangle::Rectangle(int w, int h) {
    width = w; 
    height = h;
}
Rectangle::Rectangle(int length) {
    width = height = length;
}
bool Rectangle::isSquare(){
    if(width == height) return true;
    else return false;
}