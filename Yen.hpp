//
//  Yen.hpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#ifndef Yen_hpp
#define Yen_hpp

#include "Currency.hpp"
#include <stdio.h>


class Yen : public Currency
{
public:
	Yen(string type, int amount, string fractional_type, int cents) : Currency(type, amount, fractional_type, cents) {}


};




#endif /* Yen_hpp */
