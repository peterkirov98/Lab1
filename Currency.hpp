//
//  Currency.hpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#ifndef Currency_hpp
#define Currency_hpp

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>

#include <stdio.h>

using namespace std;

//enum  currencyType {DOLLAR, EURO, YEN, RUPEE, YUAN};

class Currency
{
protected:
    string currencyName;
    int wholeParts;
    string fractionalsName;
    int fractionalParts;
public:
    Currency(string currency_name, int whole_parts, string fractional_name, int fractional_parts);
    //{currencyName = currencyName; wholeParts = wholeParts; fractionalsName = fractional_name; fractionalParts = fractional_parts;}
    friend istream& operator >> (istream& is, Currency& money);
    friend ostream& operator << (ostream& out, const Currency& money);
    
    //virtual currencyType getType() =0;
    virtual string getWholeName() {return currencyName;}
    virtual string getFractionalsName(){return fractionalsName;}
    virtual int getWhole(){return wholeParts;}
    virtual int getFractional(){return fractionalParts;}
    virtual void subtract() { wholeParts = 0; fractionalParts = 0; }
    
    //virtual operator functions
    virtual Currency& operator+(double amount) =0;
    virtual Currency& operator-(double amount) =0;
    
    virtual ~Currency() {}
};





#endif /* Currency_hpp */
