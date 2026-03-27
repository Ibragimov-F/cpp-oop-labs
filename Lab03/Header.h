#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	int bankCard;
	string accountName;
	int pinNumber;
	static int accountCount;
public:
	//Had to make default constructors, so dynamic array will work
	Account() 
		:bankCard(0),accountName("Unknown"),pinNumber(1000) {}
	Account(int bankCard, string accountName, int pinNumber) {
		accountCount++;
		if (bankCard < 0) this->bankCard = 0;
		else this->bankCard = bankCard;

		this->accountName = accountName;

		if (pinNumber < 1000 || pinNumber > 9999) {
			do {
				cout << "Invalid pin number. Please, insert again.\n";
				cout << "New pin number: ";
				cin >> pinNumber;
			} while (pinNumber < 1000 || pinNumber > 9999);
		}
		this->pinNumber = pinNumber;
	}

	void display() const {
		cout << "\tBank card: " << bankCard << endl;
		cout << "\tAccount name: " << accountName << endl;
		cout << "\tPin number: " << pinNumber << endl;
	}

	static int getAccountCount() {
		return accountCount;
	}
};

class Balance {
private:
	double balance;
	static int balanceObjects;
public:
	Balance() 
	: balance(0) {
		balanceObjects++;
	}
	Balance(double balance) {
		balanceObjects++;
		if (balance < 0) this->balance = 0;
		else this->balance = balance;
	}

	void deposit(double amount) {
		if (amount > 0) balance += amount;
		else cout << "Invalid deposit amount. Must be > 0\n";
	}

	//The system with withdraw works, but I don't see usage of boolean in lab assigment
	bool withdraw(double amount) {
		if (amount > 0 && amount <= balance) {
			balance -= amount;
			return true;
		}
		else return false;
	}

	void showBalance() const {
		cout << "\tCurrent balance: " << balance << endl;
	}

	static int getBalanceObjectCount() {
		return balanceObjects;
	}
};

class ATM {
private:
	Account account;
	Balance balance;
	static int atmCount;
public:
	ATM()
		: account(0, "Unknown", 1000), balance(0) { }
	ATM(int bankCard, string accountName, int pinNumber, double balance)
		: account(bankCard, accountName, pinNumber), balance(balance)
	{
		atmCount++;
	}

	//I couldn't understand why I don't get access to methods from other classes, so put it in ATM
	void deposit(double amount) {
		balance.deposit(amount);
	}
	void withdraw(double amount) {
		balance.withdraw(amount);
	}

	void print() const {
		account.display();
		balance.showBalance();
	}

	static int getATMCount() {
		return atmCount;
	}
	//Should have make it this way
	int getAccountCount() {
		return account.getAccountCount();
	}
	int getBalanceObjectCount() {
		return balance.getBalanceObjectCount();
	}

	//I am not sure if they are friends of ATM or ATM their friend, but I did it this way
	friend class Account;
	friend class Balance;
};

//Giving statics some value
int Account::accountCount = 0;
int Balance::balanceObjects = 0;
int ATM::atmCount = 0;