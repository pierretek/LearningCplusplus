#include <iostream>

int main() {
  //-----------Initialization-Definitions-----------
  int a{12};  // Initialzed -> given value when defined
  a = 13;     // Assigned -> given value AFTER defined
  int b;      // Uninitialized (only defined) -> not given a value yet
  std::cout << "Uninitialized variables are weird: " << b << '\n';

  return 0;
}

// https://www.learncpp.com/cpp-tutorial/uninitialized-variables-and-undefined-behavior/
