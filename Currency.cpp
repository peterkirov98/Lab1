//
//  Currency.cpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#include "Currency.hpp"

Currency::Currency(string currency_name, int whole_parts, string fractional_name, int fractional_parts)
: currencyName(currency_name), wholeParts(whole_parts), fractionalsName(fractional_name), fractionalParts(fractional_parts)
{
    while(fractionalParts > 100)
    {
        wholeParts++;
        fractionalParts = fractionalParts - 100;
    }
    
}
// + operator overloaded for the currency. Used as currency + 5.14 make sure there are only 2 numbers after decimal point
Currency& Currency::operator+(double amount)
{
    int fractionalPart;
    int wholePart;
    
    wholePart = (int)amount;
    fractionalPart = (int)((amount - wholePart) * 100);
    
    wholeParts += wholePart;
    fractionalParts += fractionalPart;
    
    return *this;
    
}
// - operator overloaded for the currency. Used as currency - 5.14 make sure there are only 2 numbers after decimal point
Currency & Currency::operator-(double amount)
{
                                                            
    int fractionalPart;
    int wholePart;
    
    wholePart = (int)amount;
    fractionalPart = (int)((amount - wholePart) * 100);
    
    wholeParts -= wholePart;
    fractionalParts -= fractionalPart;
    
    if (fractionalParts < 0)
    {
        wholeParts--;
        fractionalParts = 0;
    }
    
    return *this;
}

istream& operator >> (istream& is, Currency& dt)
{
    string amount;
    
    cout << "enter the amount of money you want to put in the wallet(ex. 100.05): " << endl;
    getline(is, amount);

	
    while (amount[amount.size()-3] != '.' || amount[0] == '.')
    {
        cout << "Wrong amount inputted try again." << endl;
        cout << "Enter the amount of money you want to put in the wallet(ex. 100.05): ";
        is >> amount;
    }
    
    return is;

}

ostream& operator<<(ostream& out,  Currency& money)
{
    // need to finish this
    out << "You now have " << money.getWholeName() << " Dollars and " << money.getFractional() << " Cents in your wallet" << endl;
    
    return out;
}


