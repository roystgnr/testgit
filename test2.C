#include "test.h"
#include "test2.h"

#include <iostream>

int test2func1(void)
{
  std::cout << "Test 2 func 1" << std::endl;
  return testfunc1();
}

int test2func2(void)
{
  std::cout << "Test 2 func 2" << std::endl;
  return testfunc2();
}
