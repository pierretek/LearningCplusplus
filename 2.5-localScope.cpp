#include <iostream>

// Learning about local scope, variable lifetimes, and temporary objects

int hello(int a) {  // Parameters are also Local Variables
  int b{}, c{};     // Local Variables are created here

  return a + 2;  // Sends a copy called a 'temporary object'

}  // All local variables are destroyed here
// a, b, and c all go "Out of Scope" here

int main() {
  // x's lifetime starts here (runtime)
  // And x's enters scope here (compiletime)
  int x{};

  std::cout << hello(1) << '\n';  // a+2 stored in temporary object from hello()

  return 0;
}  // x's lifetime end here (runtime)
   // And x's exists scope here (compiletime)

// https://www.learncpp.com/cpp-tutorial/introduction-to-local-scope/
