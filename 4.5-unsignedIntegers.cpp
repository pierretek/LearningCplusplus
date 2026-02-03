#include <iostream>

// Investigating unsigned integers and why they are disliked
int main() {

  // unsigned integers NEED the unsigned modifier
  unsigned short a;
  unsigned int b;
  unsigned long c;
  unsigned long long d;

  // Unsigned integers have DOUBLE the range of signed integers
  // n-bit unsigned range: 0 to 2^n -1

  // OVERFLOW
  /* when a number is above the limit, it wraps around back to 0
     and counts up by the leftover */

  unsigned int overflow{4'294'967'295};  // Max number for 4 byte unsigned int
  std::cout << "MAX: " << overflow << '\n';
  std::cout << "MAX + 1: " << overflow + 1 << '\n';
  std::cout << "MAX + 100: " << overflow + 100 << '\n';
  std::cout << "MAX + 1000000000: " << overflow + 1000000000 << '\n';

  // WHY WE AVOID UNSIGNED INTS
  // they are really easy to overflow from the bottom
  unsigned int e{2};
  unsigned int f{1};
  std::cout << "\nOverflow from bottom: " << f - e << '\n';

  // doesnt mix well with unsigned integers
  // operations with mixed integers are always converted to unsigned
  unsigned int g{2};
  int h{1};
  std::cout << "Mixed integers cause trouble: " << h - g << '\n';

  return 0;
}

// https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/
