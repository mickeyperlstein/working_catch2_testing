#define CATCH_CONFIG_MAIN

#include "catch.hpp"  
#include "../system_under_test/BankAccount.hpp"

TEST_CASE("Deposit money into an account", "[deposit]") {
	GIVEN("an empty bank account") {
		Bank_Account s;

		WHEN("I deposit 10.000000") {
			std::string expected_message = "10.000000 will be deposited.";
			std::string actual_message = s.deposit(10.000000);

			THEN("the system should display \"10.000000 will be deposited.\"") {
				REQUIRE(actual_message == expected_message);
			}
		}
	}
}


TEST_CASE("Deposit money into an account _sections", "[deposit]") {
	SECTION("Given an empty bank account");
	Bank_Account s;

	SECTION("When I deposit 10.000000");
	std::string expected_message = "10.000000 will be deposited.";
	std::string actual_message = s.deposit(10.000000);

	SECTION("Then the system should display \"10.000000 will be deposited.\"");
	REQUIRE(actual_message == expected_message);

}

TEST_CASE("Testing Deposit") {//Testing the deposit

	Bank_Account s;
	REQUIRE(s.deposit(10.000000) == "10.000000 will be deposited.");
}

TEST_CASE("Testing Withdrawal") {//Testing the withdrawal
	Bank_Account s = Bank_Account();
	REQUIRE(s.withdraw(50.000000) == "50.000000 will be withdrawn.");
}

TEST_CASE("Testing Withdrawal2") {//Testing the withdrawal
	Bank_Account s = Bank_Account();
	REQUIRE(s.withdraw(50.000000) == "50.000000 will be withdrawn.");
}


TEST_CASE("Testing Display") {//Testing the display
	Bank_Account s = Bank_Account();
	REQUIRE(s.deposit(50.000000) == "50.000000 will be deposited.");
	REQUIRE(s.withdraw(10.000000) == "10.000000 will be withdrawn.");
	REQUIRE(s.display() == "Your Available Balance = 40.000000");
}
