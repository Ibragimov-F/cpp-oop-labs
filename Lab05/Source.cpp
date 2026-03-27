#include "Header.h"

int main() {
	//Simply creating objects and manually adding data. Didn't use set functions because it wasn't written in task file
	Student st1("Ali", 20, 101, "Computer Science", 3.8, 3), st2("Sara", 19, 102, "Software Engineering", 3.5, 2);
	Teacher tc1("Mr. Karimov", 40, 102, "Engineering", 5000, "C++ programming"), tc2("Ms. Nargiza", 35, 202, "Mathematics", 4500, "Discrete Math");
	Staff sf1("Jasur", 30, 301, "Administrator", 3000, 8), sf2("Dilshod", 45, 302, "Accountant", 2500, 6);

	//Whole output structure
	cout << "----- Student Details -----\n";
	st1.displayStudent();
	cout << endl;
	cout << "----- Student Details -----\n";
	st2.displayStudent();
	cout << endl;

	cout << "----- Teacher Details -----\n";
	tc1.displayTeacher();
	cout << endl;
	cout << "----- Teacher Details -----\n";
	tc2.displayTeacher();
	cout << endl;

	cout << "----- Staff Details -----\n";
	sf1.displayStaff();
	cout << endl;
	cout << "----- Staff Details -----\n";
	sf2.displayStaff();
	cout << endl;
}