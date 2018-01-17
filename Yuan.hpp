//
//  Yuan.hpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#ifndef Yuan_hpp
#define Yuan_hpp

#include "Currency.hpp"
#include <stdio.h>

class Yuan : public Currency
{
public:
	Yuan(string type, int amount, string fractional_type, int cents) : Currency(type, amount, fractional_type, cents) {}
};

#endif /* Yuan_hpp */
