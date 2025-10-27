//You can prevent header files from being included multiple times
//by using header guards

#ifndef ADD_H //USE_CAPS_AND_SNAKE_CASE
#define ADD_H

int add(int x, int y);

#endif

//Or you could also use #pramga once in modern compilers

#pragma once
int add(int x, int y);

//https://www.learncpp.com/cpp-tutorial/header-guards/

