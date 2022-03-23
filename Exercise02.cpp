#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
   // 1. Create a Box type object called box1
    Box b1;
   
   // ======= DO NOT CHANGE THE INPUT ===========
   int height, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> b1.height;
   cout << "Enter the Length of the Box : ";
   cin >> b1.length;
   cout << "Enter the width of the Box : ";
   cin >> b1.width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getHeight(b1.height) << endl;
   cout << "Box Length " << box1.getLength(b1.length) << endl;
   cout << "Box Width " << box1.getWidth(b1.width) << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

