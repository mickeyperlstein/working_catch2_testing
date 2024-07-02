#include "BankAccount.hpp"


int main() {
	Bank_Account ba = Bank_Account();
	float balance;
	cout << " What is your balance? ";
	cin >> balance;

	ba.setBalance(balance);
	cout << "Your balance is " << ba.getBalance();
	return 0;
}