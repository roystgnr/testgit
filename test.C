#include "test.h"

#include <iostream>

int testfunc1(void)
{
  std::cout << "Test func 1" << std::endl;
  return 0;
}

int testfunc2(void)
{
  std::cout << "Test func 2" << std::endl;
  return 0;
}

int main(void)
{
  testfunc1();
  testfunc2();
  return 0;
}
