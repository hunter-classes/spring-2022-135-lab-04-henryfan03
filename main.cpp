#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"

int main() {
  std::cout << "Running tests for box(length,width):\n";
  std::cout << "-----------------------------------\n";
  std::cout << "box(7,4):\n";
  box(7,4);
  std::cout << "Running tests for checkerboard(length,width):\n";
  std::cout << "-----------------------------------\n";
  std::cout << "checkerboard(11,6):\n";
  checkerboard(11,6);
  std::cout << "Running tests for cross(size):\n";
  std::cout << "------------------------------\n";
  std::cout << "cross(8):\n";
  cross(8);
  std::cout << "Running tests for lower(sideLength):\n";
  std::cout << "------------------------------\n";
  std::cout << "lower(6):\n";
  lower(6);
  std::cout << "Running tests for upper(sideLength):\n";
  std::cout << "------------------------------\n";
  std::cout << "upper(5):\n";
  upper(5);
  return 0;
}
