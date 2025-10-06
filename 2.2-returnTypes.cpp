#include <iostream>

// Small program to practice with return types
int valueFromUser() {

  // Capturing the Number from the user and returning it
  std::cout << "Enter a Number: ";
  int val{};
  std::cin >> val;

  return val;  // If no return statement then undefined behaviour can occur
}

// RULE 1: MAIN MUST HAVE AN INTEGER RETURN TYPE
// RULE 2: YOU CANNOT EXPLICITLY CALL 'main()'
int main() {

  // Storing the returned variable makes it easy to reuse
  int val{valueFromUser()};

  std::cout << val << " x 4 is: " << val * 4 << '\n';
  std::cout << val << " x 5 is: " << val * 5 << '\n';
  std::cout << val << " x 6 is: " << val * 6 << '\n';

  // Main should return 0 or EXIT_SUCCESS if everything works
  return 0;
  return EXIT_SUCCESS;

  // Otherwise return EXIT_FAILURE if something failed
  return EXIT_FAILURE;
}

// https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/
