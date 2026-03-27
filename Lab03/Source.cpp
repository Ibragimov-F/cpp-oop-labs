#include "Header.h"

int main(){
	int numberOfUsers, cardNumber, pinNumber, userIndex;
	double balance, amount;
	string accountName;

	cout << "Enter number of ATM users: ";
	cin >> numberOfUsers;
	ATM* objects = new ATM[numberOfUsers];
	cout << endl;

	for (int i = 0; i < numberOfUsers; i++) {
		cout << "Enter info for user " << i+1 << endl;
		cout << "Card number: ";
		cin >> cardNumber;
		cout << "Account name: ";
		cin >> accountName;
		cout << "PIN (4 digits): ";
		cin >> pinNumber;
		cout << "Balance: ";
		cin >> balance;
		objects[i] = ATM(cardNumber, accountName, pinNumber, balance);
		cout << endl;
	}

	//Simply code which I should made as I understood from the example
	cout << "BEFORE TRANSACTIONS\n";
	for (int i = 0; i < numberOfUsers; i++) {
		cout << "User " << i + 1 << endl;
		cout << "Account details:\n";
		objects[i].print();
		cout << endl;
	}
	cout << "Enter user index for deposit (1.." << numberOfUsers << "): ";
	cin >> userIndex;
	if (userIndex < 1 || userIndex > numberOfUsers) cout << "Invalid user index.\n";
	else{
		cout << "Enter deposit amount: ";
		cin >> amount;
		objects[userIndex - 1].deposit(amount);
	}
	cout << endl;

	cout << "Enter user index for withdrawal (1.." << numberOfUsers << "): ";
	cin >> userIndex;
	if (userIndex < 1 || userIndex > numberOfUsers) cout << "Invalid user index.\n";
	else {
		cout << "Enter withdrawal amount: ";
		cin >> amount;
		objects[userIndex - 1].withdraw(amount);
	}
	cout << endl << endl;

	cout << "AFTER TRANSACTIONS\n";
	for (int i = 0; i < numberOfUsers; i++) {
		cout << "User " << i + 1 << endl;
		cout << "Account details:\n";
		objects[i].print();
		cout << endl;
	}
	cout << endl;

	cout << "STATIC COUNTERS\n";
	cout << "Total Account objects: " << objects->getAccountCount() << endl;
	cout << "Total balance objects: " << objects->getBalanceObjectCount() << endl;
	cout << "Total ATM objects: " << objects->getATMCount() << endl;

	delete[] objects;
}