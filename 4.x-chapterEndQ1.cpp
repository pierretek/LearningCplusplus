// this program retrieves 2 doubles from the user and an operation, then prints
// the result

#include <iostream>

// method to apply the appropiate calculation and print it
void calcResults(double a, double b, char function) {
  double result{};

  if (function == '+') {
    result = a + b;
  } else if (function == '-') {
    result = a - b;
  } else if (function == '*') {
    result = a * b;
  } else if (function == '/') {
    result = a / b;
  } else {
    std::cout << "Error: Invalid Operation!" << '\n';
    return;
  }

  std::cout << a << ' ' << function << ' ' << b << " is " << result << '\n';
}

// main method
int main() {
  // retrieving the doubles and operation from the user
  double a{}, b{};
  char function{};
  std::cout << "Enter a decimal value-> ";
  std::cin >> a;
  std::cout << "Enter another decimal value -> ";
  std::cin >> b;

  std::cout
      << "Enter one of the following mathematical symbols: +, -, *, or /: ";
  std::cout << "\nYour Choice: ";

  std::cin >> function;

  // calculating and printing the answer
  calcResults(a, b, function);

  return 0;
}

// https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
