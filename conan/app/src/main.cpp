#include "a/a.h"
#include "b/b.h"

#include <stdio.h>
#include <iostream>

int main(void) {
  a::call_a_method();
  b::call_b_method();
  std::cout << "OK" << std::endl;
  return 0;
}