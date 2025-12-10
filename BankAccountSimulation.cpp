#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class BankAccount
{
public:
	BankAccount(double initialBalance = 0.0, const std::string& transactionFile = "transaction.txt") : balance(initialBalance), filename(transactionFile)
	{
		if (initialBalance > 0.0)
		{
			saveTransaction("DEPOSIT", initialBalance, "Initial deposit");
		}
	}

	void deposit(double amount, const std::string& description = "Deposit")
	{
		if (amount <= 0.0)
		{
			std::cout << "Deposit amount have to be positive.\n";
			saveTransaction("Failed Deposit!", amount, "Invalid amount");
			return;

		}

		balance += amount;
		saveTransaction("DEPOSIT", amount, description);
	}

	bool purchase(double amount, const std::string& description = "Purchase")
	{
		if (amount <= 0.0)
		{
			std::cout << "Purchase amount must be positive.\n";
			saveTransaction("PURCHASE_FAILED", amount, "Invalid amount: " + description);
			return false;
		}

		if (amount > balance)
		{
			std::cout << "Insufficient funds for this purchase.\n";
			saveTransaction("PURCHASE_FAILED", amount, "Insufficient funds: " + description);
			return false;
		}

		balance -= amount;
		saveTransaction("PURCHASE", amount, description);
		return true;
	}

	void printBalance() const
	{
		std::cout << "Current Balance: $" << std::fixed << std::setprecision(2) << balance << '\n';
	}

private:
	double balance;
	std::string filename;

	void saveTransaction(const std::string& action, double amount, const std::string& description = "") const
	{
		std::ofstream out(filename, std::ios::app);
		if (!out)
		{
			std::cerr << "Unable to open transaction file: " << filename << '\n';
			return;
		}

		out << action << " | $" << std::fixed << std::setprecision(2) << amount << " | " << description << '\n';
	}
};

int main() {
	// Simple test of the BankAccount class
	BankAccount account;

	account.deposit(1000.00, "Initial deposit");

	// Attempt a 2 valid purchase
	account.purchase(499.99, "Laptop");
	account.purchase(299.99, "Smartphone");

	// Print final balance
	account.printBalance();

	return 0;
}
