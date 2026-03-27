#include "Header.h"

int main() {
	StockEx First, Second;
	
	int choice;
	int amount;

	cout << "Enter details for first market:\n";
	cin >> First;
	cout << endl;
	cout << "Enter details for second market:\n";
	cin >> Second;
	cout << endl;

	cout << "First market: \n";
	cout << First << endl;
	cout << "Second market: \n";
	cout << Second << endl;

	//choosing currency allows amount to be multiplied by the rate of chosen object
	cout << "Choose market for currency exchange: \n";
	cout << "1. First Market\n";
	cout << "2. Second Market\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "Enter amount to exchange: ";
	cin >> amount;
	cout << "Converted amount: ";

	//used else if instead of else because user will need to write only 1 or 2. Could also make else for error input, but it wasn't in the task
	if (choice == 1) {
		cout << First * amount << endl << endl;
	}
	else if (choice == 2) {
		cout << Second * amount << endl << endl;
	}

	cout << "Difference between market rate: " << First - Second << endl;
	//Simply boolean which return true or false. This system doesn't work if I write <, because I made overload only for >
	if (First > Second) cout << "First market rate is higher.\n";
	else cout << "Second market rate is higher.\n";
}