#include <iostream>

extern "C" {
  int get_retval(void);
  int get_cval(void);
}

int main() {
  std::cout << "C++ seems to be working." << std::endl;
  return get_retval();
}
