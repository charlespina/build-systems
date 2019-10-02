#include "local-b/b.h"
#include "local-a/a.h"

#include <stdio.h>
#include <iostream>

void hello_b() {
  hello_a();
  std::cout << "Hello from 'local-b'" << std::endl;
}
