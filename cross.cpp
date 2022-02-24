#include <iostream>

void cross(int size) {
  int k;
  std::cout << "Shape:\n";
  for (int i = 0;i < size/2;i++) {
    k = size - i;
    for (int j = 0;j < size+1;j++) {
        if(j == i || j == k) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
      }
      std::cout << std::endl;
    }
  for (int i = size/2+1;i < size+1;i++) {
    k = size - i;
    for (int j = 0;j < size+1;j++) {
        if(j == i || j == k) {
          std::cout << "*";
        } else {
          std::cout << " ";
        }
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
