#include "Box.h"
#include<iostream>
using namespace std;

// Implement setters and getters
void setLength(int l){
  int length=l;
}
void setWidth(int w){
  int width=w;
}
void setHeight(int h){
 int height=h;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return w*l*h;
}
