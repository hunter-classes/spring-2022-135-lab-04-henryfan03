#include <iostream>

void trapezoid(int width, int height) {
  int right;
  int valid = width - height;
  if (valid*2 > width) {
    std::cout << "Shape: \n";
    for (int i = 0;i < height;i++) {
      right = width - i;
      for (int j = 0;j < width;j++) {
        if (j < i||j >= right) {
          std::cout << " ";
        }
        else {
          std::cout << "*";
        }
      }
      std::cout << "\n";
    }
    std::cout << "\n";
  }
  else {
    std::cout << "Impossible shape!\n\n";
  }
}
