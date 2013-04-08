#include "test.h"
#include "test2.h"

#include <iostream>

int test2func1(void)
{
  std::cout << "Test 2 func 1" << std::endl;
  test_func1();
  return test_func1();
}

int test2func2(void)
{
  std::cout << "Test 2 func 2" << std::endl;
  test_func2();
  return test_func2();
}
