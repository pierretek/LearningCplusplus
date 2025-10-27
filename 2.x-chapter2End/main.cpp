#include "io.h" //including the header file here AND in io.cpp

//Using the functions from io.cpp declared by io.h
int main() {
  int a{readNumber()};
  int b{readNumber()};

  writeAnswer(a+b);
}



//https://www.learncpp.com/cpp-tutorial/chapter-2-summary-and-quiz/
