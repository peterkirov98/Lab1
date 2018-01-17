//
//  Wallet.cpp
//  Lab 1
//Peter Kirov, Nathan Zadkovsky
//

#include "Wallet.hpp"


//default cosntructor
Wallet::Wallet(){}

//constructor
Wallet::Wallet(string currency_name, int whole_parts, string fractional_name, int fractional_parts)
//: Currency(currency_name, whole_parts, fractional_name,fractional_parts){}
{
    //if( )
}

//checks to see if individual currency type is zero
bool Wallet::checkEmpty(int cType, Currency* a )
{
        switch(cType)
        {
            case DOLLAR:
                if( a[cType].getFractional() == 0 && a[cType].getWhole() ==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;
            case EURO:
                if( a[cType].getFractional() == 0 && a[cType].getWhole() ==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;
            case YEN:
                if( a[cType].getFractional() == 0 && a[cType].getWhole() ==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;
            case RUPEE:
                if( a[cType].getFractional() == 0 && a[cType].getWhole() ==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;
            case YUAN:
                if( a[cType].getFractional() == 0 && a[cType].getWhole() ==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
                break;
            default:
                std::cout << " Invalid currency type." << endl;
                return false;                                       // how will we know where problem is?
                                                                    // try and catch?
               
        } // end switch statement
} // end checkEmpty 


// add money to curreny type
void Wallet::addMoney(int cType, Currency *a,double val)
{
    // add money based on currency type
    switch (cType)
    {
        case DOLLAR:
            
            a[cType].operator+(val);
            break;
        case EURO:
            a[cType].operator+(val);
            break;
        case YEN:
            a[cType].operator+(val);
            break;
        case RUPEE:
            a[cType].operator+(val);
            break;
        case YUAN:
            a[cType].operator+(val);
            break;
        default:
            std::cout << "Invalid currency type." << endl;
    } // end switch statement
} // end addMoney

// subtract money from currency type
void Wallet::subtractMoney (int cTy, Currency *a, double val) 
{
    bool b;
    // subtract money based on currency type
    switch (cTy)
    {
        case DOLLAR:
            b = checkEmpty( cTy, a);
            if( b == true)
            {
                std::cout << "Cannot subtract money from this currency type. Value is zero." << endl;
            }
            else
            {
                a[cTy].operator-(val);
            }
            break;
        case EURO:
            b = checkEmpty( cTy, a);
            if( b == true)
            {
                std::cout << "Cannot subtract money from this currency type. Value is zero." << endl;
            }
            else
            {
                a[cTy].operator-(val);
            }
            break;
        case YEN:
            b = checkEmpty( cTy, a);
            if( b == true)
            {
                std::cout << "Cannot subtract money from this currency type. Value is zero." << endl;
            }
            else
            {
                a[cTy].operator-(val);
            }
            break;
        case RUPEE:
            b = checkEmpty( cTy, a);
            if( b == true)
            {
                std::cout << "Cannot subtract money from this currency type. Value is zero." << endl;
            }
            else
            {
                a[cTy].operator-(val);
            }
            break;
        case YUAN:
            b = checkEmpty( cTy, a);
            if( b == true)
            {
                std::cout << "Cannot subtract money from this currency type. Value is zero." << endl;
            }
            else
            {
                a[cTy].operator-(val);
            }
            break;
        default:
            std::cout << "Invalid currency type." << endl;
        
    } // end switch statement
    
} // end subtractMoney

// number of individual currency types whose value == 0
int Wallet::numCurrenciesIsZero(Currency* a)
{
    int count =0;
    for( int i =0; i <numCurrencies; i++)
    {
        bool b = checkEmpty(i, a);
        if(b == true)
        {
            count++;
        }
        
    } // end for loop
    
    return count;
}// end numCurreniesIsZero


// zero out all currencies
void Wallet::emptyAll(Currency *a)
{
    
    for(int i=0; i < numCurrencies; i++)
    {
        // subtract functions sets whole an frational variable to zero
        a[i].subtract();
    }
} // end emptyAll




//deconstructor
Wallet::~Wallet(){}











