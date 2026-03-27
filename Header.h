#include <iostream>
#include <string>

using namespace std;

class StudentAccount {
private:
	string accountNumber;
	string studentName;
	string universityID;
	double balance;
	double withdraw;
public:
	void setAccountNumber(string x) {
		accountNumber = x;
	}
	void setStudentName(string x) {
		studentName = x;
	}
	void setUniversityID(string x) {
		universityID = x;
	}
	void setBalance(double x) {
		balance = x;
	}
	void setWithdraw(double x) {
		withdraw = x;
	}

	string getAccountNumber() {
		return accountNumber;
	}
	string getStudentName() {
		return studentName;
	}
	string getUniversityID() {
		return universityID;
	}
	double getBalance() {
		return balance;
	}
	double getWithdraw() {
		return withdraw;
	}
};