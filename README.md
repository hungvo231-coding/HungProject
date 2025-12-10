# Module8.README
//  The program goal is to make a simple BankAccount class that has features for deposits, purchases, balance tracking, and transaction logging. All will be recorded in a text file.

//	FEATURES
//		Deposit Money: Adding funds to an account, with a validation to ensure that the user input is positive
//		Purchasing: Deduct the balance, as there is enough balance to make a purchase
//		Transaction logging: All actions will be recorded in a file named transaction.txt (deposit, purchase, failed transaction)
//		Balance display: Print out the current amount after all transactions, formatted in two decimal places.

//	CLASS AND METHOD:
//		double balance:		Used to store the current balance.
//		std::string filename:		File where the transaction gets saved.
//		deposit(double, string):	Add money and memorize the deposit.
//		purchase(double, string)	Attempt to make purchase; memorize into the system success or failed
//		printBalance()			Print out the output of the current balance
//		saveTransaction()		Write a transaction into the file.


//	HOW PROGRAM RUN:
//		Program creates a BankAccount object.
//		An initial deposit of $1000 is made and recorded.
//		Two purchases are created, then attempting to decide success or failure:
//			Laptop: $499.99
//			Smartphone: $299.99
//		Final balance print out after all deductions.
//		EXAMPLE: 
//			Current Balance: $200.02
