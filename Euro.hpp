//
//  Euro.hpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#ifndef Euro_hpp
#define Euro_hpp

#include "Currency.hpp"


class Euro : public Currency
{

public:
	Euro(string type, int amount, string fractional_type, int cents) : Currency(type, amount, fractional_type, cents) {}


};





#endif /* Euro_hpp */
