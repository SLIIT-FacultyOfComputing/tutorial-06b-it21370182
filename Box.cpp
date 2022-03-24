#include "Box.h"
#include<iostream>
using namespace std;

// Implement setters and getters
void Box::setLenght(int l){
    length=l;
}
void Box::setWidth(int w){
    width=w;
}
void Box::setHeight(int h){
    height=h;
}

int Box::getHeight(){
    return height;
}

int Box::getLength(){
    return length;
}

int Box::getWidth(){
    return width;
}

int Box::calcVolume() {
  return width*length*height;
}

