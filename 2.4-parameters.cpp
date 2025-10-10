#include <iostream>

// Functions can take parameters in order to recieve values
void printSum(int x, int y) {
  // The arguments are copied into the parameters using copy initialization
  // "Pass By Value"
  std::cout << "The Sum of " << x << " and " << y << " is: " << x + y << '\n';
}

int numFromUser() {
  std::cout << "Enter Any Number: ";
  int n{};
  std::cin >> n;
  return n;
}

void printNum(int n) {
  std::cout << "You Entered: " << n << '\n';

  // Void functions do NOT require a return statement
}

// Function with parameters AND a return type
int add(int x, int y) { return x + y; }

// UNUSED function parameters
void something(int /*optional comment*/) {}

int main() {
  std::cout << "\tPROGRAM START" << '\n';

  // Arguments are the values passed by the caller to the function
  printSum(1, 2);
  printSum(12, 24);
  printSum(-100, 50);

  int a{numFromUser()};
  printNum(a);

  // Compacted Form (no intermediate variable)
  printNum(numFromUser());

  // 2 layers of embedded functions
  printNum(add(numFromUser(), numFromUser()));

  return 0;
}

//https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/
