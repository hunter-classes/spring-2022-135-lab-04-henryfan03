#include <iostream>

void upper(int sideLength) {
  std::cout << "Shape: \n";
  for (int i = 0;i < sideLength;i++) {
    for (int j = 0;j < sideLength;j++) {
      if (j < i) {
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
