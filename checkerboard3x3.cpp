#include <iostream>

std::string linehelper(int length,int code) {
  int remainder = length % 3;
  int cycles = length - remainder;
  cycles = cycles / 3;
  std::string result;
  std::string shaded = "***";
  std::string white = "   ";
  if (code == 0) {
    for (int i = 0;i < cycles;i++) {
      if (i % 2 == 0) {
        result.append(shaded);
      }
      else {
        result.append(white);
      }
    }
    if (remainder != 0) {
      for (int i = cycles*3;i < length;i++) {
        if (i % 2 == 0) {
          result.append("*");
        }
        else {
          result.append(" ");
        }
      }
    }
    //std::cout << result << std::endl;
    return result;
    }
  else if (code == 1) {
    for (int i = 0;i < cycles;i++) {
      if (i % 2 == 0) {
        result.append(white);
      }
      else {
        result.append(shaded);
      }
    }
    if (remainder != 0) {
      for (int i = cycles*3;i < length;i++) {
        if (i % 2 == 0) {
          result.append(" ");
        }
        else {
          result.append("*");
        }
      }
    //std::cout << result << std::endl;
    return result;
    }
  }
}

void checkerboard3x3(int width, int height) {
  int remainder = height % 3;
  int iterations = height - remainder;
  int cycles = iterations / 3;
  std::cout << "Shape:\n";
  for (int i = 0;i < cycles;i++) {
    std::cout << linehelper(width,i%2) << std::endl;
    std::cout << linehelper(width,i%2) << std::endl;
    std::cout << linehelper(width,i%2) << std::endl;
  }
  if (remainder != 0) {
    for (int j = 0;j < remainder;j++) {
      std::cout << linehelper(width,(iterations)%2) << std::endl;
    }
  }
}
