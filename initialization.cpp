#include <iostream>

int main() {
  // Defining Variable
  int x;
  // Copy assignment
  x = 123;

  //--------Initializion-types----------------

  // Default initialization
  int a;
  std::cout << "a equals " << a << std::endl;  // prints garbage value

  // Copy initialization
  int b = 5;
  std::cout << "b equals " << b << std::endl;

  // direct Initialization (bad)
  int c(6);
  std::cout << "c equals " << c << std::endl;

  // direct copy Initialization (bad)
  int d = (6);
  std::cout << "d equals " << d << std::endl;

  // direct-list Initialization (good)
  int e{7};
  std::cout << "e equals " << e << std::endl;

  // direct-list copy Initialization (good)
  int f = {8};
  std::cout << "f equals " << f << std::endl;

  // Value Initialization
  int g{};
  std::cout << "g equals " << g << std::endl;  // prints 0

  //-------------------------------------------------

  // Narrowing Conversions (turns 4.5 to 4)
  int h(4.5); //Direct and copy initialization allows it
  std::cout << "h equals " << h << std::endl;

  int l{4.5}; //While direct list doesnt allow it

  //------------Initializing-on-the-same-line--------
  int a=1,b=2,c=3; //Copy initialization
  int a(1),b(2),c(3); //Direct initialization
  int a{1},b{2},c{3}; //Direct-list initialization
  int a{},b{},c{}; //Value initialization

  //-----------------Maybe-Unused----------------
  [[maybe_unused]] int i{}; //dont complain if i is unused
  int j{};

  return 0;
}

//https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/
