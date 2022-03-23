#include "Box.h"
#include<iostream>
using namespace std;

// Implement setters and getters
void Box :: setLength(int l){
 length=l;
}
void Box :: setWidth(int w){
  width=w;
}
void Box :: setHeight(int h){
 height=h;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return width*length*height;
}
