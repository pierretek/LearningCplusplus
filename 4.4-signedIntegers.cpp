#include <iostream>

// Investigating the various sizes of integers
int main() {
  // All integers are SIGNED by default unless the UNSIGNED modifier is added
  int a{};
  signed int aa{};   // redundant
  unsigned int b{};  // unsigned

  // There are 4 main types of integer:
  short c{};      // 2 bytes
  int d{};        // 2 bytes
  long e{};       // 4 bytes
  long long f{};  // 8 bytes

  /* n-bit signed variable has a range of
     -(2^(n-1)) to (2^(n-1))-1.          */
  
  // the negative side has slightly more range because 0 is included in the positive side

  // OVERFLOW
  /* when a signed integer overflows
  it wraps back around to the maximum negative value
  and counts up by how far the overflow is */

  int overflow{2'147'483'647};  // Max number for 4 byte signed int
  std::cout << "MAX: " << overflow << '\n';
  std::cout << "MAX + 1: " << overflow + 1 << '\n';
  std::cout << "MAX + 100: " << overflow + 100 << '\n';
  std::cout << "MAX + 1000000000: " << overflow + 1000000000 << '\n';
  std::cout << "MAX + MAX: " << overflow + 2'147'483'647 << '\n';
  std::cout << "MAX + MAX + 3: " << overflow + 2'147'483'650 << '\n';

  // INTEGER DIVISION
  /* when doing division with 2 integers,
     the decimal value gets cut off (NOT ROUNDED) */
  int g{15};
  int h{10};
  std::cout << "\n15/10 should be 1.5 but the .5 is cut off: " << g / h << '\n';

  return 0;

}

//https://www.learncpp.com/cpp-tutorial/signed-integers/
