#include "Header.h"

int main() {
	StudentAccount Student1, Student2;
	Student1.setAccountNumber("2");
	Student1.setStudentName("Farrux");
	Student1.setUniversityID("U2510096");
	Student1.setBalance(50000);
	Student1.setWithdraw(2000);

	Student2.setAccountNumber("1");
	Student2.setStudentName("Islambek");
	Student2.setUniversityID("U2510095");
	Student2.setBalance(25000);
	Student2.setWithdraw(4000);

	cout << "Student1:\n";
	cout << "Account Number: " << Student1.getAccountNumber() << endl;
	cout << "Student Name: " << Student1.getStudentName() << endl;
	cout << "University ID: " << Student1.getUniversityID() << endl;
	cout << "Balance: " << Student1.getBalance() << endl;
	cout << "Withdraw: " << Student1.getWithdraw() << endl;
	
	cout << endl;

	cout << "Student2:\n";
	cout << "Account Number: " << Student2.getAccountNumber() << endl;
	cout << "Student Name: " << Student2.getStudentName() << endl;
	cout << "University ID: " << Student2.getUniversityID() << endl;
	cout << "Balance: " << Student2.getBalance() << endl;
	cout << "Withdraw: " << Student2.getWithdraw() << endl;
}