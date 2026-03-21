//Practicing using pass by reference in a very simple function

#include <iostream>

//makes the first value hold the lesser of the two
void sort2(int& first, int& second) {

    //if no swap is needed
    if (first < second) return;

    //swapping the values
    int temp{first};
    first = second;
    second = temp;

}


int main() {
    int x{7};
    int y{5};

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}


//https://www.learncpp.com/cpp-tutorial/chapter-12-summary-and-quiz/
