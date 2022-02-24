#include <iostream>

void checkerboard(int width, int height) {
  //std::cout << "Width: " << std::itos(width) << std::end;
  //std::cout << "Height: " << std::itos(height) << std::end;
  //std::cout << "\n";
  std::cout << "Shape:\n";
  for (int i = 0;i < height;i++) {
    if (i % 2 == 0) {
      for (int j = 0;j < width;j++) {
        if (j % 2 == 0) {
          std::cout << "*";
        }
        else {
          std::cout << " ";
        }
      }
      std::cout << "\n";
    }
    if (i % 2 == 1) {
      for (int j = 0;j < width;j++) {
        if (j % 2 == 1) {
          std::cout << "*";
        }
        else {
          std::cout << " ";
        }
      }
      std::cout << "\n";
    }
  }
  std::cout << "\n";
}
