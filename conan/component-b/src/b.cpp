#include <stdio.h>
#include <iostream>

#include "b/b.h"

using namespace b;

bool call_b_method() {
  std::cout << "b method called" << std::endl;
  return true;
}