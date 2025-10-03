#include <iostream>

int main() {
  // std::cout can print to terminal
  std::cout << "Hello World" << std::endl;
  int a{1};
  std::cout << a << std::endl;

  // you can use multiple << to combine stuff
  std::cout << "Hello World " << a << std::endl;

  // its better to use \n to avoid flushing the buffer
  std::cout << "using \\n instead :D " << a << '\n';

  //-------------using-cin--------------
  int x{};
  std::cin >> x;
  std::cout << "You entered " << x << '\n';

  // For multiple inputs (seperated by space or \n)
  int y{}, z{};
  std::cin >> y >> z;
  std::cout << "You entered " << y << " and " << z << '\n';

  //---------input-is-buffered--------
  int b{}, c{};
  std::cin >> b;  // You can capture the input at different times
  std::cin >> c;  // Or all at once!
  std::cout << "You entered " << b << " and " << c << '\n';

  //-----insertion-and-extraction-operators----------
  std::cout << x;  // moves the value of x into the terminal (insertion)
  std::cin >> x;   // moves the input into the value of x (extraction)

  //------testing-program------------
  std::cout << "Enter three values: ";
  int num1{}, num2{}, num3{};
  std::cin >> num1 >> num2 >> num3;
  std::cout << "You entered " << num1 << ", " << num2 << ", " << num3 << '\n';

  return 0;
}


//https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
