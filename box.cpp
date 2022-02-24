#include <iostream>

void box(int width, int height) {
  //std::cout << "Width: " << width << std::end;
  //std::cout << "Height: " << height << std::end;
  //std::cout << "\n";
  std::cout << "Shape:\n";
  for (int i = 0;i < height;i++) {
    for (int j = 0;j < width;j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}
