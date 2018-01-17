//
//  Dollar.hpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#ifndef Dollar_hpp
#define Dollar_hpp

#include "Currency.hpp"

class Dollar : public Currency
{
public:
	Dollar(string type, int amount, string fractional_type, int cents) : Currency(type, amount, fractional_type, cents) {}
};




#endif /* Dollar_hpp */
