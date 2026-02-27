//this program implements a bitwise rotate left function

#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits) {

	//doing the shift AND rotating the last bit
	return (bits << 1) | (bits >> 3);
}

int main() {
	std::bitset<4> bits1{0b0001};
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{0b1001};
	std::cout << rotl(bits2) << '\n';

	return 0;
}

//>>>>LIST OF BITSET FUNCTIONS<<<<

// test() allows us to query whether a bit is a 0 or 1.
// set() allows us to turn a bit on
// reset() allows us to turn a bit off
// flip() allows us to flip a bit value from a 0 to a 1 or vice versa.

// size() returns the number of bits in the bitset.
// count() returns the number of bits in the bitset that are set to true.
// all() returns a Boolean indicating whether all bits are set to true.
// any() returns a Boolean indicating whether any bits are set to true.
// none() returns a Boolean indicating whether no bits are set to true.


// https://www.learncpp.com/cpp-tutorial/bit-manipulation-with-bitwise-operators-and-bit-masks/
