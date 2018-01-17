// Lab Team: Nathan Zadkovsky & Peter Kirov
//  main.cpp
//  Lab 1
//
//
// This program

#include "Wallet.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    Wallet curr; // object of wallet
    int choice; // user specificed choice
    int cTy; // user input for type of currency
    double amount; // user input for how much to add/subtract
    bool b = false; // to be used for checking if entire wallet is empty
    
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
    
    do
    {
        cout << "Enter 1 to add money by curreny type." << endl;
        cout << "Enter 2 to subtract money by currency type." << endl;
        cout << "Enter 3 to empty everything in wallet." << endl;
        cout << "Enter 4 to check how many currrencies have a zero value. " <<endl;
        cout << "Enter 5 to check if wallet is empty." << endl;
        cout << "Enter 6 to check if a specific currency is empty" << endl;
        cout << "Enter 7 to quit." << endl;
   
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                cout << "Enter a currency you'd like to add money to." <<endl;
                cout << "0. Dollar" << endl;
                cout << "1. Euro" << endl;
                cout << "2. Yen" << endl;
                cout << "3. Rupee" << endl;
                cout << "4. Yuan" << endl;
                cin >> cTy;
                cout << "How much money would you like to add?" <<endl;
                cin >> amount;
                
                break;
            case 2:
                cout << "Enter a currency you'd like to subtract money to." <<endl;
                cout << "0. Dollar" << endl;
                cout << "1. Euro" << endl;
                cout << "2. Yen" << endl;
                cout << "3. Rupee" << endl;
                cout << "4. Yuan" << endl;
                cin >> cTy;
                cout << "How much money would you like to add?" <<endl;
                cin >> amount;
                ;
                break;
            case 3:
                // emptyies everything in wallet
                break;
            case 4:
                // cout << "There are " << curr.numCurrenciesIsZero(*****) << "currencies that have a balance of zero ";
                // cout<< "in your wallet. << endl;
                break;
            case 5: // check if specific currency is empty
                cout << "Enter type of currency you'd like to check if empty."<<endl;
                cout << "0. Dollar" << endl;
                cout << "1. Euro" << endl;
                cout << "2. Yen" << endl;
                cout << "3. Rupee" << endl;
                cout << "4. Yuan" << endl;
                cin >> cTy;
                
                break;
            case 6: // check if entire wallet is empty
                for(int i=0; i < 5; i++)
                {
                    
                    if (!b)
                    {
                        cout << "Entire Wallet is not empty." << endl;
                    }
                }
                cout << "Entire Wallet is empty." << endl;
                
                break;
            default:
                cout << "Invalid choice option. Enter a number 1-6." << endl;
                break;
        }
    }
    while(choice !=7);
    
    
    return 0;
}
