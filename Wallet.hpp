//
//  Wallet.hpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#ifndef Wallet_hpp
#define Wallet_hpp

#include "Yuan.hpp"
#include "Rupee.hpp"
#include "Yen.hpp"
#include "Euro.hpp"
#include "Dollar.hpp"
#include "Currency.hpp"
#include <iostream>
#include <stdio.h>
#include <string>

const int numCurrencies = 5;  // # of total currencies
enum CurrencyType { DOLLAR, EURO, YEN, RUPEE, YUAN};

class Wallet// :  public Currency
{
public :
    
    int numCurrenciesIsZero(Currency* arr);
    void subtractMoney (int cTy, Currency *arr, double val);
    void addMoney(int cType, Currency *arr,double val);
    bool checkEmpty(int cType, Currency* arr);
    void emptyAll( Currency* a);
    //default constructor
    Wallet();
    
    //consructor
    Wallet(string currency_name, int whole_parts, string fractional_name, int fractional_parts); //: Currency ( currency_name,  whole_parts,                            //fractional_name, fractional_parts){}
    // deconstructor
    ~Wallet();
};
//private:
    /*
    // objects
    
    Currency* dollar = nullptr;
    Currency* euro = nullptr;
    Currency* yen = nullptr;
    Currency* rupee = nullptr;
    Currency* yuan = nullptr;
    
    // array of type currency class
    Currency* arr[5] = {dollar, euro, yen, rupee, yuan};
    */
     //};
#endif /* Wallet_hpp */
