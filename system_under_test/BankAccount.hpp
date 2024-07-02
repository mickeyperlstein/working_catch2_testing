//CSC1501: Tools of the Trade
//Week 6 - Testing
//C++ Implementation of Week Demo
//Source for python implementation: https://www.geeksforgeeks.org/python-program-to-create-bankaccount-class-with-deposit-withdraw-function/
#pragma once

#include <iostream>
#include <string>
#include <sstream>


using namespace std;
//The Bank Account Class

//C++ program using OOP concept to perform some simple bank operations like deposit and withdrawal of money.

class Bank_Account {
public:
    //Constructor
    Bank_Account() {
        balance = 0;
        cout << "Instance created of the Bank Account Machine." << endl;
    }


    std::string to_string(float value, int decimals = 6) {
        char buffer[32];
        sprintf_s(buffer, sizeof(buffer), "%.*f", decimals, value);
        return std::string(buffer);
    }

    //Helpers
    string deposit(float a) {//Deposits money into bank account instance
        balance += a;
        return to_string(a) + " will be deposited.";
    }

    string withdraw(float a) {//Withdraws money from bank account instance
        balance -= a;
        return to_string(a) + " will be withdrawn.";
    }

    string display() {//Displays bank account balance
        return "Your Available Balance = " + to_string(balance);
    }

    //Getters
    float getBalance() {
        return balance;
    }

    //Setters
    void setBalance(float b) {
        balance = b;
    }
private:
    float balance;

};

