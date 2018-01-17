//
//  Rupee.hpp
//  Lab 1
//  Peter Kirov, Nathan Zadkovsky
//

#ifndef Rupee_hpp
#define Rupee_hpp

#include "Currency.hpp"
#include <stdio.h>


class Rupee : public Currency
{
public:
	Rupee(string type, int amount, string fractional_type, int cents) : Currency(type, amount, fractional_type, cents) {}
};






#endif /* Rupee_hpp */
