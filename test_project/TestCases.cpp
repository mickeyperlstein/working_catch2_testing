#define CATCH_CONFIG_MAIN

#include "catch.hpp"  
#include "../system_under_test/BankAccount.hpp"

TEST_CASE("Testing Deposit") {//Testing the deposit
    Bank_Account s = Bank_Account();
    REQUIRE(s.deposit(10.000000) == "10.000000 will be deposited.");
}

TEST_CASE("Testing Withdrawal") {//Testing the withdrawal
    Bank_Account s = Bank_Account();
    REQUIRE(s.withdraw(50.000000) == "50.000000 will be withdrawn.");
}

TEST_CASE("Testing Display") {//Testing the display
    Bank_Account s = Bank_Account();
    REQUIRE(s.deposit(50.000000) == "50.000000 will be deposited.");
    REQUIRE(s.withdraw(10.000000) == "10.000000 will be withdrawn.");
    REQUIRE(s.display() == "Your Available Balance = 40.000000");
}
