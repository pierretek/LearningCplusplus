//this program calcultes the hieght of a falling ball over 5 seconds

#include <iostream>
const double GRAVITY = 9.81;

//method to get the height from the user
double getHieght() {
  double hieght{};
  std::cout << "Enter the starting hieght of the Building: ";
  std::cin >> hieght;
  return hieght;
}

void printFallHieght(double second, double startingHieght) {

	//Calculating the hieght
  double fallHieght = startingHieght - (GRAVITY) * (second * second)/2;

  //Printing the hieght
  if (fallHieght > 0) {
    std::cout << "After " << second << " seconds: " << "The ball is "
              << fallHieght << " High\n";
  } else {
    std::cout << "After " << second
              << " seconds: " << "The ball is on the ground\n";
  }
}

//main method
int main() {
  std::cout << "Hello World" << '\n';
  double hieght = getHieght();

  printFallHieght(1, hieght);
  printFallHieght(2, hieght);
  printFallHieght(3, hieght);
  printFallHieght(4, hieght);
  printFallHieght(5, hieght);

  return 0;
}

//https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
